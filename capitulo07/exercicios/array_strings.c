/**
 * @file array_strings.c
 * @brief Alocação dinâmica de um array de strings e preenchimento com dados.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num_strings;
    printf("Quantas strings deseja armazenar? ");
    scanf("%d", &num_strings);

    char **strings = (char**)malloc(num_strings * sizeof(char*));
    if (strings == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < num_strings; i++) {
        char temp[100];
        printf("Digite a string %d: ", i + 1);
        scanf("%s", temp);
        strings[i] = strdup(temp);
    }

    printf("Strings armazenadas:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); // Liberar memória alocada para cada string
    }
    free(strings); // Liberar memória alocada para o array de ponteiros

    return 0;
}
