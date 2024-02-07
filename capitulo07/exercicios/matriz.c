/**
 * @file matriz.c
 * @brief Manipulação de uma matriz 3x3 usando ponteiros para ponteiros.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ponteiro_linha, *ponteiro_coluna;

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        ponteiro_linha = matriz[i];
        for (int j = 0; j < 3; j++) {
            ponteiro_coluna = ponteiro_linha + j;
            printf("%d ", *ponteiro_coluna);
        }
        printf("\n");
    }

    return 0;
}
