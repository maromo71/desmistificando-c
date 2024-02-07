#include <stdio.h>
#include <string.h>
/**
 * @example
Digite uma URL: https://www.exemplo.com/pagina?parametro1=valor1&parametro2=valor2&parametro3=valor3
Digite o parâmetro a ser extraído:
parametro1
Valor do parâmetro parametro1: valor1
 * @since fev 2024
 * @author Maromo
 * @brief Localizar a primeira ocorrência de uma substring por outra em uma frase.
 **/

int main() {
    char url[1000];
    printf("Digite uma URL: ");
    fgets(url, sizeof(url), stdin);

    char parametro[100];
    printf("Digite o parâmetro a ser extraído: ");
    scanf("%s", parametro);

    char *ptr = strtok(url, "?&");
    while (ptr != NULL) {
        if (strstr(ptr, parametro) != NULL) {
            char *valor = strchr(ptr, '=') + 1;
            printf("Valor do parâmetro %s: %s\n", parametro, valor);
            break;
        }
        ptr = strtok(NULL, "?&");
    }

    return 0;
}

