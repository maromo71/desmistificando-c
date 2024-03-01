#include <stdio.h>
#include <stdlib.h>
int main() {
    int *numeros;
    int tamanhoInicial = 5;
    int tamanhoAumentado = 10;
    // Alocando memória inicialmente para 5 inteiros
    numeros = (int *)malloc(tamanhoInicial * sizeof(int));
    if (numeros == NULL) {
        perror("Falha na alocação inicial de memória");
        exit(1);
    }
    // Preenchendo a memória alocada com valores iniciais
    for (int i = 0; i < tamanhoInicial; i++) {
        numeros[i] = i;
    }
    // Aumentando o tamanho da memória alocada
    numeros = (int *)realloc(numeros, tamanhoAumentado * sizeof(int));
    if (numeros == NULL) {
        perror("Falha na realocação de memória");
        exit(1);
    }
    // Preenchendo os novos espaços alocados com valores
    for (int i = tamanhoInicial; i < tamanhoAumentado; i++) {
        numeros[i] = i;
    }
    // Exibindo todos os valores na memória alocada
    for (int i = 0; i < tamanhoAumentado; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(numeros);

    return 0;
}