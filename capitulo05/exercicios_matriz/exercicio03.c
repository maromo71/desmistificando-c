#include <stdio.h>

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite o número de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &linhas1, &colunas1);
    printf("Digite o número de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &linhas2, &colunas2);

    if (colunas1 != linhas2) {
        printf("As matrizes não podem ser multiplicadas.\n");
        return 1;
    }

    int matriz1[linhas1][colunas1], matriz2[linhas2][colunas2], resultado[linhas1][colunas2];

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas2; i++) {
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Resultado da multiplicação das matrizes:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
