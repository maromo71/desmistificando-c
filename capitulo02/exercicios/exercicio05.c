
#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("Digite dois números e uma operação (+, -, *, /): ");
    scanf("%lf %lf %c", &num1, &num2, &operacao);

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

    printf("Resultado da operação: %.2lf\n", resultado);

    return 0;
}
