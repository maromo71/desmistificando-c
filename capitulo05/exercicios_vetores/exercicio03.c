#include <stdio.h>

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int positivos = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > 0) {
            positivos++;
        }
    }

    printf("Número de elementos positivos: %d\n", positivos);

    return 0;
}
