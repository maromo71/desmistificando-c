#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Para que nao repita os numeros
    srand(time(NULL));
    int numeroSecreto = rand() % 100 + 1; // Gera um número aleatório de 1 a 100
    int tentativa, tentativasMaximas = 10;
    int contador = 0;

    printf("Adivinhe o número secreto de 1 a 100.\n");

    while (contador < tentativasMaximas) {
        printf("Tentativa %d: Digite um número: ", contador + 1);
        scanf("%d", &tentativa);

        if (tentativa == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto (%d).\n", numeroSecreto);
            break;
        } else if (tentativa < numeroSecreto) {
            printf("Tente um número maior.\n");
        } else {
            printf("Tente um número menor.\n");
        }

        contador++;
    }

    if (contador == tentativasMaximas) {
        printf("Suas tentativas acabaram. O número secreto era %d.\n", numeroSecreto);
    }

    return 0;
}

