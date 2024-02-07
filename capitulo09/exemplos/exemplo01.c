#include <stdio.h>
/**
 * @author Maromo
 * @since fev 2024
 * @brief Exemplo de uso do fgetc. Coloque arquivo texto no
 * diretorio do executável
 * @return
 */
int main() {
    FILE *arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int ch;
    while ((ch = fgetc(arquivo)) != EOF) { // EOF = End Of File
        putchar(ch);
    }

    fclose(arquivo);
    return 0;
}