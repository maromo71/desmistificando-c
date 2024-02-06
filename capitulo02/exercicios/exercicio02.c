#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Digite o comprimento dos três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}

