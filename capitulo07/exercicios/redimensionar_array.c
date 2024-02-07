/**
 * @file redimensionar_array.c
 * @brief Criação de um array dinâmico de inteiros e redimensionamento usando realloc.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int*)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    printf("Array original (tamanho 5):\n");
    for (int i = 0; i < 5; i++) {
        array[i] = i + 1;
        printf("%d ", array[i]);
    }
    printf("\n");

    array = (int*)realloc(array, 10 * sizeof(int));
    if (array == NULL) {
        printf("Erro de realocação de memória.\n");
        return 1;
    }

    printf("Array redimensionado (tamanho 10):\n");
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}

