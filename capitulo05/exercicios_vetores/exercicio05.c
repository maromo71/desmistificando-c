#include <stdio.h>

int main() {
    int tamanho1, tamanho2;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);

    int vetor1[tamanho1];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);

    int vetor2[tamanho2];

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]);
    }

    int tamanho3 = tamanho1 + tamanho2;
    int vetor3[tamanho3];

    for (int i = 0; i < tamanho1; i++) {
        vetor3[i] = vetor1[i];
    }

    for (int i = tamanho1; i < tamanho3; i++) {
        vetor3[i] = vetor2[i - tamanho1];
    }

    printf("Vetor concatenado:\n");
    for (int i = 0; i < tamanho3; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
/*
 * Esses exercícios ajudarão a praticar
 * e aprofundar seu conhecimento sobre
 * o uso de vetores em C. Certifique-se
 * de entender a lógica por trás de cada
 * um deles.
 */
