#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int tamanho = 10;

    // Alocando memória para 10 inteiros
    numeros = (int *)malloc(tamanho * sizeof(int));

    // Verificando se a alocação de memória foi bem-sucedida
    if (numeros == NULL) {
        perror("Falha na alocação de memória");
        exit(1); // Encerra o programa se a alocação falhar
    }

    // Uso da memória alocada: preenchendo com valores e exibindo
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = i * 2; // Atribuindo valores
        printf("%d ", numeros[i]); // Exibindo valores
    }
    printf("\n");

    // Liberando a memória alocada
    free(numeros);

    return 0;
}
