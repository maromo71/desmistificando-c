#include <stdio.h>
/**
 * Exercicio para quebrar a `cuca`
 * Crie uma matriz 5X5 para ver o resultado
 * E faça uma leitura no código até entender
 * Comente na issue, caso não consiga.
 */
int main() {
    int n;
    printf("Digite o tamanho da matriz (n x n): ");
    scanf("%d", &n);

    int matriz[n][n];

    int valor = 1;
    int esquerda = 0, direita = n - 1, cima = 0, baixo = n - 1;

    while (valor <= n * n) {
        for (int i = esquerda; i <= direita; i++) {
            matriz[cima][i] = valor++;
        }
        cima++;

        for (int i = cima; i <= baixo; i++) {
            matriz[i][direita] = valor++;
        }
        direita--;

        for (int i = direita; i >= esquerda; i--) {
            matriz[baixo][i] = valor++;
        }
        baixo--;

        for (int i = baixo; i >= cima; i--) {
            matriz[i][esquerda] = valor++;
        }
        esquerda++;
    }

    printf("Matriz em forma de espiral:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
