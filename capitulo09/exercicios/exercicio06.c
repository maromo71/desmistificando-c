#include <stdio.h>
#include <stdlib.h>
/**
 * @author Maromo
 * @since fev 2024
 * @brief Ler um arquivo de imagem Metadados
 * @return
 */
int main() {
    // Nome do arquivo de imagem
    char arquivo[100];

    // Solicita o nome do arquivo de imagem ao usuário
    printf("Digite o nome do arquivo de imagem: ");
    scanf("%s", arquivo);

    // Comando para exibir os metadados da imagem usando o ExifTool
    char comando[200];
    sprintf(comando, "exiftool %s", arquivo);

    // Executa o comando e armazena a saída em um arquivo temporário
    system(comando);

    return 0;
}

