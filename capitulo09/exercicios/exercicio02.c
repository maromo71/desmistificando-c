#include <stdio.h>
#include <ctype.h>

/**
 * @author Maromo
 * @since fev 2024
 * @brief Conversor de Arquivo de Texto para Maiúsculas
 * @return
 */
int main() {
    FILE *arquivoOrigem, *arquivoDestino;
    char nomeArquivoOrigem[50], nomeArquivoDestino[50];
    char caractere;

    // Solicita o nome do arquivo de origem ao usuário
    printf("Digite o nome do arquivo de texto de origem: ");
    scanf("%s", nomeArquivoOrigem);

    // Abre o arquivo de origem para leitura
    arquivoOrigem = fopen(nomeArquivoOrigem, "r");

    // Verifica se o arquivo de origem foi aberto corretamente
    if (arquivoOrigem == NULL) {
        printf("Erro ao abrir o arquivo de origem.\n");
        return 1;
    }

    // Solicita o nome do arquivo de destino ao usuário
    printf("Digite o nome do arquivo de texto de destino: ");
    scanf("%s", nomeArquivoDestino);

    // Abre o arquivo de destino para escrita
    arquivoDestino = fopen(nomeArquivoDestino, "w");

    // Verifica se o arquivo de destino foi aberto corretamente
    if (arquivoDestino == NULL) {
        printf("Erro ao abrir o arquivo de destino.\n");
        fclose(arquivoOrigem); // Fecha o arquivo de origem antes de sair
        return 1;
    }

    // Lê cada caractere do arquivo de origem, converte para maiúsculas e escreve no arquivo de destino
    while ((caractere = fgetc(arquivoOrigem)) != EOF) {
        fputc(toupper(caractere), arquivoDestino);
    }

    // Fecha os arquivos
    fclose(arquivoOrigem);
    fclose(arquivoDestino);

    printf("Arquivo convertido para maiúsculas com sucesso.\n");

    return 0;
}

