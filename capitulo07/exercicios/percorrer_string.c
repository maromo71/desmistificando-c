/**
 * @file percorrer_string.c
 * @brief Programa que utiliza ponteiros para percorrer cada caractere de uma string e imprime-os individualmente.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>

int main() {
    char *str = "hello";
    char *ptr = str;

    printf("Caracteres da string: ");
    while (*ptr) {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
