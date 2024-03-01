#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int tamanho = 10;
    // Alocando e inicializando memória para 10 inteiros
    numeros = (int *)calloc(tamanho, sizeof(int));
    // Verificando se a alocação de memória foi bem-sucedida
    if (numeros == NULL) {
        perror("Falha na alocação de memória");
        exit(1); // Encerra o programa se a alocação falhar
    }
    // Demonstrando que a memória foi inicializada com zero
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]); // Deve imprimir 0 para cada elemento
    }
    printf("\n");
    // Modificando e exibindo os valores alocados
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = i; // Atribuindo novos valores
        printf("%d ", numeros[i]); // Exibindo os novos valores
    }
    printf("\n");
    // Liberando a memória alocada
    free(numeros);
    return 0;
}
