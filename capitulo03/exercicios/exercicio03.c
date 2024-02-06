#include <stdio.h>
#include <string.h>

int main() {
    char senhaCorreta[] = "senha123";
    char senhaDigitada[50];

    do {
        printf("Digite a senha: ");
        scanf("%s", senhaDigitada);

        if (strcmp(senhaDigitada, senhaCorreta) == 0) {
            printf("Senha correta. Acesso concedido!\n");
            break;
        } else {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (1); // Loop infinito

    return 0;
}

