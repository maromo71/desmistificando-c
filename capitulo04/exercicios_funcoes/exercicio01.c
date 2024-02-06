#include <stdio.h>

int max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int maior = max(num1, num2);
    printf("O maior número é: %d\n", maior);

    return 0;
}

