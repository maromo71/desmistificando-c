#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra minúscula: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
            letra = 'A';
            break;
        case 'b':
            letra = 'B';
            break;
            // Continue com todas as letras minúsculas e suas conversões
            // com certeza veremos uma forma mais prática de resolver (loops)
        default:
            printf("Caractere não é uma letra minúscula.\n");
            return 1; // Saída com erro
    }

    printf("A letra em maiúscula é: %c\n", letra);

    return 0;
}
