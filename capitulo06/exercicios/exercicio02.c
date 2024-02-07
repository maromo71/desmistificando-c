#include <stdio.h>
#include <string.h>
/**
 * @since fev 2024
 * @author Maromo
 * @brief Verificar se uma palavra é um palíndromo (lê-se igual de trás para frente).
 * */
int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int ehPalindromo = 1;

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("%s é um palíndromo.\n", palavra);
    } else {
        printf("%s não é um palíndromo.\n", palavra);
    }

    return 0;
}

