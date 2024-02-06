#include <stdio.h>

void imprimeTabuada(int numero) {
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int num;
    printf("Digite um número para a tabuada: ");
    scanf("%d", &num);

    imprimeTabuada(num);

    return 0;
}

