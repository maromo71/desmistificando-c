#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos primeiros 100 números inteiros é: %d\n", soma);

    return 0;
}
