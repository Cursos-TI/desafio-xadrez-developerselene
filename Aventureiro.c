#include <stdio.h>

int main() {
    int i, j;

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo:\n");

    for (i = 1; i <= 2; i++) { // Loop para duas casas para baixo
        printf("Baixo %d\n", i);

        j = i;
        while (j == 2) { // Quando chegar na segunda casa, faz o movimento lateral
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
