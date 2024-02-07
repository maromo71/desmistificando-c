#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINHA 100
#define MAX_CAMPO 50
/**
 * @author Maromo
 * @since fev 2024
 * @brief Gerador de Relatórios a partir de um Arquivo CSV
 */
// Estrutura para armazenar os dados de uma linha do arquivo CSV
typedef struct {
    char nome[MAX_CAMPO];
    char sobrenome[MAX_CAMPO];
    int idade;
} Aluno;

// Função para processar um arquivo CSV e gerar um relatório em formato de texto
void gerarRelatorio(const char *nomeArquivo) {
    FILE *arquivo;
    char linha[MAX_LINHA];
    Aluno aluno;

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Exibe o cabeçalho do relatório
    printf("Relatório de Alunos:\n");
    printf("%-20s %-20s %s\n", "Nome", "Sobrenome", "Idade");

    // Processa cada linha do arquivo
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        // Divide a linha em campos usando strtok
        char *token = strtok(linha, ",");
        if (token != NULL) {
            strcpy(aluno.nome, token);
            token = strtok(NULL, ",");
            if (token != NULL) {
                strcpy(aluno.sobrenome, token);
                token = strtok(NULL, ",");
                if (token != NULL) {
                    aluno.idade = atoi(token);

                    // Exibe os dados do aluno
                    printf("%-20s %-20s %d\n", aluno.nome, aluno.sobrenome, aluno.idade);
                }
            }
        }
    }

    // Fecha o arquivo
    fclose(arquivo);
}

int main() {
    char nomeArquivo[MAX_CAMPO];

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo CSV: ");
    scanf("%s", nomeArquivo);

    // Chama a função para gerar o relatório
    gerarRelatorio(nomeArquivo);

    return 0;
}

