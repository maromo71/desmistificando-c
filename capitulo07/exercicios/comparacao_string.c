/**
 * @file comparacao_string.c
 * @brief Função que compara duas strings usando ponteiros.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>

int compararStrings(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    const char *str1 = "hello";
    const char *str2 = "world";

    int resultado = compararStrings(str1, str2);

    if (resultado < 0) {
        printf("'%s' vem antes de '%s'\n", str1, str2);
    } else if (resultado > 0) {
        printf("'%s' vem depois de '%s'\n", str1, str2);
    } else {
        printf("'%s' e '%s' são iguais\n", str1, str2);
    }

    return 0;
}
