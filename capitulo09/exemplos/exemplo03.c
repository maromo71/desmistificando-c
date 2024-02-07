#include <stdio.h>
/**
 * @author Maromo
 * @since fev 2024
 * @brief Uso do fseek. No exemplo coloca X na posicao do 10o caracetere.
 * @return
 */
int main() {
    FILE *arquivo = fopen("exemplo.txt", "r+");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    fseek(arquivo, 10, SEEK_SET); // Move para a 10ª posição no arquivo
    fputc('X', arquivo); // Escreve um caractere na posição atual

    fclose(arquivo);
    return 0;
}
