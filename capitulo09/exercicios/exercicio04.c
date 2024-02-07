#include <stdio.h>
#include <stdlib.h>
/**
 * @author Maromo
 * @since 2024
 * @brief Manipulador de Arquivos Binários
 */
#define TAMANHO_MAX 100

// Definição da estrutura de dados para armazenar informações do jogador
typedef struct {
    char nome[TAMANHO_MAX];
    int pontos;
} Jogador;

// Função para escrever os dados de um jogador no arquivo binário
void escreverJogador(FILE *arquivo, const Jogador *jogador) {
    fwrite(jogador, sizeof(Jogador), 1, arquivo);
}

// Função para ler os dados de um jogador do arquivo binário
void lerJogador(FILE *arquivo, Jogador *jogador) {
    fread(jogador, sizeof(Jogador), 1, arquivo);
}

int main() {
    FILE *arquivo;
    Jogador jogador;

    // Abre o arquivo binário para escrita
    arquivo = fopen("jogadores.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escreve os dados de um jogador no arquivo
    printf("Digite o nome do jogador: ");
    scanf("%s", jogador.nome);
    printf("Digite os pontos do jogador: ");
    scanf("%d", &jogador.pontos);
    escreverJogador(arquivo, &jogador);

    // Fecha o arquivo
    fclose(arquivo);

    // Abre o arquivo binário para leitura
    arquivo = fopen("jogadores.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê e exibe os dados do jogador do arquivo
    printf("\nDados do jogador:\n");
    lerJogador(arquivo, &jogador);
    printf("Nome: %s, Pontos: %d\n", jogador.nome, jogador.pontos);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
