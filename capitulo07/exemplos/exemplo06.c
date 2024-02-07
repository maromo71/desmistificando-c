#include <stdio.h>
#include <stdlib.h>

int main() {
    // Aloca espaço para 5 inteiros
    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        // Falha na alocação de memória
        exit(1);
    }

    // Utilização do espaço alocado
    for (int i = 0; i < 5; ++i) {
        *ptr = i;
        ptr++;
    }
    ptr-=5;
    //Apresentando o ponteiro
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *ptr++);
    }
    ptr-=5;
    free(ptr); // Liberação da memória
    return 0;
}