#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &colunas);

    int matriz1[linhas][colunas], matriz2[linhas][colunas], resultado[linhas][colunas];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

