#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de Adição Capítulo 7
 * @return 0
 */
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    ptr += 3; // Move o ponteiro 3 elementos à frente
    printf("Após adição: %p, Valor: %d\n", (void*)ptr, *ptr);
    return 0;
}
