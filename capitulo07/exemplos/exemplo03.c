#include <stdio.h>
/**
 * @author Maromo
 * @brief Decremento de ponteiros
 * @return
 */
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr + 4; // Apontando para o último elemento

    ptr--; // Decrementa o ponteiro
    printf("Após decremento: %p, Valor: %d\n", (void*)ptr, *ptr);

    return 0;
}
