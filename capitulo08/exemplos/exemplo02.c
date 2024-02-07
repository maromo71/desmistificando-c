#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo mais completo
 */
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1 = {"João", 32, 1.75};
    //Acesso ao campo nome e depois idade
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    // ...
    return 0;
}