/**
 * @file percorrer_array.c
 * @brief Utilização de ponteiros para percorrer e imprimir os elementos de um array de inteiros.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>

void imprimirArray(int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(int);

    printf("Elementos do array: ");
    imprimirArray(array, tamanho);

    return 0;
}

