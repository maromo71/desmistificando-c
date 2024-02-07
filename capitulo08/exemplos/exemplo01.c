#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de uma estrutura
 */
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;

    // Atribuindo valor ao campo 'idade'
    pessoa1.idade = 30;

    // Acessando o campo 'idade'
    printf("Idade: %d\n", pessoa1.idade);
    return 0;
}
