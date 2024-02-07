#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de Passagem por Valor
 */
struct Pessoa {
    char nome[50];
    int idade;
};

void exibirPessoa(struct Pessoa p) {
    printf("Nome: %s, Idade: %d\n", p.nome, p.idade);
}
int main() {
    struct Pessoa pessoa1 = {"Ana", 28};
    exibirPessoa(pessoa1); // Passagem por valor
    return 0;
}
