#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAX 100
/**
 * @author Maromo
 * @since fev 2024
 * @brief Sistema de Cadastro de Alunos
 */
// Definição da estrutura de dados para armazenar informações do aluno
typedef struct {
    char nome[TAMANHO_MAX];
    int matricula;
    float nota;
} Aluno;

// Função para adicionar um novo aluno ao arquivo de cadastro
void adicionarAluno(FILE *arquivo) {
    Aluno aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    // Escreve os dados do aluno no arquivo
    fprintf(arquivo, "%s %d %.2f\n", aluno.nome, aluno.matricula, aluno.nota);
}

// Função para exibir todos os alunos cadastrados no arquivo
void exibirAlunos(FILE *arquivo) {
    Aluno aluno;

    printf("\nLista de Alunos:\n");
    printf("Nome\tMatrícula\tNota\n");
    while (fscanf(arquivo, "%s %d %f", aluno.nome, &aluno.matricula, &aluno.nota) != EOF) {
        printf("%s\t%d\t\t%.2f\n", aluno.nome, aluno.matricula, aluno.nota);
    }
}

int main() {
    FILE *arquivo;
    int opcao;

    // Abre o arquivo de cadastro de alunos
    arquivo = fopen("alunos.txt", "a+"); // Abre o arquivo para leitura e escrita, criando-o se não existir
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Menu de opções
    do {
        printf("\nMenu de Opções:\n");
        printf("1. Adicionar Aluno\n");
        printf("2. Exibir Alunos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarAluno(arquivo);
                break;
            case 2:
                fseek(arquivo, 0, SEEK_SET); // Move o ponteiro do arquivo para o início
                exibirAlunos(arquivo);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}

