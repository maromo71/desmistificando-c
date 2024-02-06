#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    int resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero.\n");
                return 1; // Saída com erro
            }
            break;
        default:
            printf("Operação inválida.\n");
            return 1; // Saída com erro
    }

    printf("Resultado da operação: %d\n", resultado);

    return 0;
}
