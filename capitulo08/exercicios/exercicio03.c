#include <stdio.h>
/**
 * @author Maromo
 * @brief Cálculo do IMC usando structs para armazenamento
 */
// Definição da struct para armazenar os dados do usuário
struct Usuario {
    float altura; // Altura em metros
    float peso;   // Peso em quilogramas
};

// Função para calcular o IMC
float calcularIMC(float altura, float peso) {
    return peso / (altura * altura);
}

int main() {
    // Declaração de uma variável do tipo struct Usuario para armazenar os dados do usuário
    struct Usuario usuario;

    // Solicita ao usuário que insira sua altura e peso
    printf("Digite sua altura em metros: ");
    scanf("%f", &usuario.altura);

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &usuario.peso);

    // Calcula o IMC usando a função calcularIMC e exibe o resultado
    float imc = calcularIMC(usuario.altura, usuario.peso);
    printf("Seu IMC é: %.2f\n", imc);

    // Exibe uma mensagem de acordo com o IMC calculado
    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Seu peso está normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está com sobrepeso.\n");
    } else {
        printf("Você está obeso.\n");
    }

    return 0;
}

