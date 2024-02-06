#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    /*
     * a função itera de 2 até a raiz
     * quadrada do número (i * i <= num).
     * Isso ocorre porque, matematicamente,
     * se existir um divisor maior que a
     * raiz quadrada de num, também deve
     * haver um divisor menor que a raiz
     * quadrada de num. Portanto,
     * verificar até a raiz quadrada é
     * suficiente para determinar se um
     * número é primo.*/
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}

