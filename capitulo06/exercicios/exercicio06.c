#include <stdio.h>
/**
* @since fev 2024
* @author Maromo
* @brief Construir uma string que representa uma URL com parâmetros dinâmicos.
*/
int main() {
    // Variáveis para armazenar os valores dos parâmetros
    char parametro1[] = "valor1";
    char parametro2[] = "valor2";
    char parametro3[] = "valor3";

    // String que representa a URL base
    char urlBase[] = "https://www.exemplo.com/pagina?";

    // String para construir a URL completa
    char urlCompleta[100]; // Tamanho arbitrário para a string completa

    // Construção da URL completa usando sprintf
    sprintf(urlCompleta, "%sparametro1=%s&parametro2=%s&parametro3=%s", urlBase, parametro1, parametro2, parametro3);

    // Imprime a URL completa
    printf("URL Completa: %s\n", urlCompleta);

    return 0;
}
