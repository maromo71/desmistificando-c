#include <stdio.h>
/**
 * @author Maromo
 * @brief Exemplo de struct aninhada
 */
struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[50];
    struct Data dataNascimento;
};

int main() {
    struct Pessoa pessoa1;
    pessoa1.dataNascimento.dia = 15;
    pessoa1.dataNascimento.mes = 10;
    pessoa1.dataNascimento.ano = 1990;

    printf( "%2d/%2d/%d", pessoa1.dataNascimento.dia,
            pessoa1.dataNascimento.mes,
            pessoa1.dataNascimento.ano);
    return 0;
}
