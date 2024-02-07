#include <stdio.h>

int main() {
    FILE *arquivo = fopen("saida.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fputc('a', arquivo); // Escreve o caractere 'a' no arquivo
    fclose(arquivo);
    return 0;
}
