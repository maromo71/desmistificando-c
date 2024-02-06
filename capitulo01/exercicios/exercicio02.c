#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Fórmula para calcular a área do círculo
    area = M_PI * pow(raio, 2);

    // Saída formatada com duas casas decimais
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}

