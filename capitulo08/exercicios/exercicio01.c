#include <stdio.h>
/**
 * @author Maromo
 * @brief 1. Criar e preencher uma struct
 * @since fev 2024
 */
// Definição da struct para armazenar dados de um aluno
struct Aluno {
    char nome[50];
    int idade;
    float notas[3]; // Supondo que há três notas
};

// Função para preencher os dados de um aluno
void preencherAluno(struct Aluno *aluno) {
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno->idade);
    printf("Digite as três notas do aluno: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &aluno->notas[i]);
    }
}

// Função para exibir os dados de um aluno
void exibirAluno(struct Aluno aluno) {
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Notas: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", aluno.notas[i]);
    }
    printf("\n");
}

int main() {
    struct Aluno aluno;

    // Preencher os dados do aluno
    preencherAluno(&aluno);

    // Exibir os dados do aluno
    printf("\nDados do Aluno:\n");
    exibirAluno(aluno);

    return 0;
}

