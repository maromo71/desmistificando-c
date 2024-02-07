#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @author Maromo
 * @brief Exemplo de Ponteiro Apontando para uma Struct:
 */
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa *ptr = (struct Pessoa *)malloc(sizeof(struct Pessoa)); // Alocação dinâmica
    if (ptr == NULL) {
        // Tratamento de erro
        exit(1);
    }

    ptr->idade = 30; // Acesso e modificação usando ponteiro
    strcpy(ptr->nome, "Carlos");
    printf("%s tem %d anos.\n", ptr->nome, ptr->idade);

    free(ptr); // Liberação da memória alocada
    return 0;
}

