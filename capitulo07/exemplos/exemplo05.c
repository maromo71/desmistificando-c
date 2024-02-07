#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo ponteiros para ponteiros
 * @return
 */
int main() {
    int valor = 10;         // Declara uma variável inteira
    int *ptr = &valor;      // Ponteiro para 'valor'
    int **ptrParaPtr = &ptr; // Ponteiro para ponteiro 'ptr'

    printf("Valor original: %d\n", valor);
    printf("Acessando valor via ponteiro para ponteiro: %d\n", **ptrParaPtr);

    **ptrParaPtr = 20;
// Modificando o valor de 'valor' através do ponteiro para //ponteiro

    printf("Valor modificado: %d\n", valor);

    return 0;
}

