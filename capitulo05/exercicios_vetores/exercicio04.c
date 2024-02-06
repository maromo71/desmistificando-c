#include <stdio.h>

int main() {
    int tamanho, alvo;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser buscado: ");
    scanf("%d", &alvo);

    int encontrado = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == alvo) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O número %d está no vetor.\n", alvo);
    } else {
        printf("O número %d não está no vetor.\n", alvo);
    }

    return 0;
}
