#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de Percorrer uma String com Ponteiro
 * @return
 */
int main() {
    char str[] = "Hello";
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
