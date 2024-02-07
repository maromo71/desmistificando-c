#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de Percorrer um Array com Ponteiros, cap 7
 * @return 0
 */
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
