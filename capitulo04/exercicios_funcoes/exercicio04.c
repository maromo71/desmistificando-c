#include <stdio.h>

float converteTemperatura(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperaturaCelsius;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    float temperaturaFahrenheit = converteTemperatura(temperaturaCelsius);
    printf("A temperatura em graus Fahrenheit é: %.2f\n", temperaturaFahrenheit);

    return 0;
}

