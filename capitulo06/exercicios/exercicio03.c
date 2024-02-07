#include <stdio.h>
#include <string.h>
/**
 * @since fev 2024
 * @author Maromo
 * @brief Contar o número de palavras em uma frase.
 */
int main() {
    char frase[1000];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int contador = 0;
    char *token = strtok(frase, " ");

    while (token != NULL) {
        contador++;
        token = strtok(NULL, " ");
    }

    printf("Número de palavras na frase: %d\n", contador);

    return 0;
}

