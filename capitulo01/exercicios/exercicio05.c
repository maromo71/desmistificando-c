#include <stdio.h>
#include <string.h>

int main() {
    char linha[100];

    printf("Digite uma linha de texto: ");
    scanf(" %[^\n]", linha);

    //a funcao strlen retorna a quantidade
    //de caracteres na variavel linha
    //veremos mais adiante
    int tamanho = strlen(linha);

    printf("O número de caracteres na linha é: %d\n", tamanho);

    return 0;
}

