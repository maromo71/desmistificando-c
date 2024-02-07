/**
 * @file calculadora.c
 * @brief Implementação de uma calculadora simples usando ponteiros para funções.
 * @author Maromo
 * @since fev 2024
 */

#include <stdio.h>

// Declaração dos tipos de ponteiros para funções
typedef int (*Operacao)(int, int);

/**
 * @brief Funções para operações básicas: soma, subtração, multiplicação e divisão.
 */
int soma(int a, int b) { return a + b; }
int subtracao(int a, int b) { return a - b; }
int multiplicacao(int a, int b) { return a * b; }
int divisao(int a, int b) { return a / b; }

int main() {
    int a = 10, b = 5;

    // Ponteiros para funções
    Operacao operacoes[] = {soma, subtracao, multiplicacao, divisao};

    // Realizando operações
    for (int i = 0; i < 4; i++) {
        printf("Resultado da operação %d: %d\n", i+1, operacoes[i](a, b));
    }

    return 0;
}
