#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita %d\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda %d\n", casas);
    moverRainha(casas - 1);
}

// Função recursiva e loops aninhados para o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima Direita %d\n", i);
        }
    }
}

// Movimento do Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1, j = 2; (i <= 2) && (j >= 1); i++, j--) {
        printf("Cima %d\n", i);
        if (i == 2) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}
