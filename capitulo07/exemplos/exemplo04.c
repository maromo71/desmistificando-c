#include <stdio.h>
#include <stdlib.h>
/**
 * @author Maromo
 * @brief Exemplo com Matriz
 * @return
 */
int main() {
    int linhas = 2, colunas = 3;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Exemplo de atribuição e acesso
    matriz[0][0] = 1; // Acessando o primeiro elemento
    printf("%d\n", matriz[0][0]);

    // Lembre-se de liberar a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}