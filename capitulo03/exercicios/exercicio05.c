#include <stdio.h>

int main() {
    //1. Termo e 2. Termo são iguais a 1
    //a partir do 3. temos a soma dos dois anteriores
    int termos, termo1 = 1, termo2 = 1, proximoTermo;

    printf("Quantos termos da sequência de Fibonacci você deseja ver? ");
    scanf("%d", &termos);

    printf("Sequência de Fibonacci com %d termos:\n", termos);

    for (int i = 1; i <= termos; i++) {
        printf("%d ", termo1);
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}

