#include <stdio.h>
/**
 * @author Maromo
 * @brief Leitura e Análise de um Arquivo de Texto
 * @return
 */
int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char caractere;
    int numPalavras = 0, numLinhas = 0;

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê cada caractere do arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        // Incrementa o número de palavras se encontrar um espaço ou nova linha
        if (caractere == ' ' || caractere == '\n') {
            numPalavras++;
        }
        // Incrementa o número de linhas se encontrar uma nova linha
        if (caractere == '\n') {
            numLinhas++;
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Incrementa o número de palavras para contar a última palavra da última linha
    numPalavras++;

    // Exibe o resultado
    printf("Número de palavras: %d\n", numPalavras);
    printf("Número de linhas: %d\n", numLinhas);

    return 0;
}
