#include <stdio.h>
#include <string.h>
/**
 * @since fev 2024
 * @author Maromo
 * @brief Localizar a primeira ocorrência de uma substring por outra em uma frase.
 * */
int localizarSubstring(const char *frase, const char *sub) {
    // Encontra a primeira ocorrência da substring na frase
    char *posicao = strstr(frase, sub);

    // Se a substring foi encontrada, retorna a posição
    if (posicao != NULL) {
        return posicao - frase + 1; // Adiciona 1 para corresponder à indexação humana
    } else {
        return 0; // Retorna 0 se a substring não foi encontrada
    }
}

int main() {
    char frase[1000];
    char substring[100];

    // Solicita ao usuário a frase e a substring a ser localizada
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';  // Remove o caractere de nova linha inserido pelo fgets

    printf("Digite a substring a ser localizada: ");
    scanf("%s", substring);

    // Localiza a substring na frase
    int posicao = localizarSubstring(frase, substring);

    // Exibe a posição da primeira ocorrência da substring na frase
    if (posicao != 0) {
        printf("A substring '%s' foi encontrada na posicao %d da frase.\n", substring, posicao);
    } else {
        printf("A substring '%s' nao foi encontrada na frase.\n", substring);
    }

    return 0;
}




