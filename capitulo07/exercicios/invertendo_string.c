/**
 * @file invertendo_string.c
 * @brief Implementação de um programa que inverte uma string usando ponteiros.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Função que inverte uma string.
 * @param str A string a ser invertida.
 */
void inverterString(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);

    inverterString(str);
    printf("String invertida: %s\n", str);

    return 0;
}

