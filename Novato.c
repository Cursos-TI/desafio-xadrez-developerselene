#include <stdio.h>

// Programa de movimentação das peças: Torre, Bispo e Rainha
int main() {
    int i;

    // Torre - Move 5 casas para a direita (usando FOR)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    printf("\n");

    // Bispo - Move 5 casas na diagonal (usando WHILE)
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita %d\n", i);
        i++;
    }

    printf("\n");

    // Rainha - Move 8 casas para a esquerda (usando DO-WHILE)
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda %d\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
