#include <stdio.h>
/*
 * Exercício com uso de ponteiros
 * passagem por referência./
 */
void trocaValores(int *a, int *b) {
    //recebe como ponteiro para o &
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Valores iniciais: num1 = %d, num2 = %d\n", num1, num2);
    //Necessario passar o endereco
    //de memoria para o procedimento `&`
    trocaValores(&num1, &num2);
    printf("Valores trocados: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
