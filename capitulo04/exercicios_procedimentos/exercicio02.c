#include <stdio.h>

void desenhaRetangulo(int altura, int largura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int altura, largura;
    printf("Digite a altura e a largura do retângulo: ");
    scanf("%d %d", &altura, &largura);

    printf("Retângulo desenhado:\n");
    desenhaRetangulo(altura, largura);

    return 0;
}
