#include <stdio.h>

float calculaMedia(float array[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma / tamanho;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    float numeros[tamanho];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &numeros[i]);
    }

    float media = calculaMedia(numeros, tamanho);
    printf("A média dos elementos do array é: %.2f\n", media);

    return 0;
}
