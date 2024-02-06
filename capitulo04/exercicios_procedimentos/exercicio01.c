#include <stdio.h>

void imprimeArray(int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Array de números: ");
    imprimeArray(numeros, tamanho);

    return 0;
}
