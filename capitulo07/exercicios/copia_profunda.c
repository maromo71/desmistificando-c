/**
 * @file copia_profunda.c
 * @brief Cópia profunda de uma estrutura que contém ponteiros.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char *nome;
} Pessoa;

Pessoa* copiarPessoa(Pessoa original) {
    Pessoa *copia = (Pessoa*)malloc(sizeof(Pessoa));
    copia->idade = original.idade;
    copia->nome = strdup(original.nome); // Cópia profunda do nome
    return copia;
}

int main() {
    Pessoa maria = {30, "Maria"};
    Pessoa *copia_maria = copiarPessoa(maria);

    printf("Cópia: %s, %d anos\n", copia_maria->nome, copia_maria->idade);

    free(copia_maria->nome);
    free(copia_maria);

    return 0;
}

