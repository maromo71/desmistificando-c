#include <stdio.h>
/**
 * @author Maromo
 * @brief Array de Structs para Registros de Empregados
 */
// Definição da struct para armazenar dados de um empregado
struct Empregado {
    char nome[50];
    int idade;
    float salario;
};

// Função para adicionar dados de um empregado
void adicionarEmpregado(struct Empregado empregados[], int *numEmpregados) {
    printf("Digite o nome do empregado: ");
    scanf(" %[^\n]%*c", empregados[*numEmpregados].nome); // Lê uma linha inteira incluindo espaços
    printf("Digite a idade do empregado: ");
    scanf("%d", &empregados[*numEmpregados].idade);
    printf("Digite o salário do empregado: ");
    scanf("%f", &empregados[*numEmpregados].salario);
    (*numEmpregados)++;
}

// Função para exibir os dados de todos os empregados
void exibirEmpregados(struct Empregado empregados[], int numEmpregados) {
    printf("\nDados dos Empregados:\n");
    for (int i = 0; i < numEmpregados; i++) {
        printf("Empregado %d:\n", i + 1);
        printf("Nome: %s\n", empregados[i].nome);
        printf("Idade: %d\n", empregados[i].idade);
        printf("Salário: %.2f\n", empregados[i].salario);
    }
}

int main() {
    struct Empregado empregados[100]; // Supomos um máximo de 100 empregados
    int numEmpregados = 0;
    char continuar;

    // Adicionar dados dos empregados
    do {
        adicionarEmpregado(empregados, &numEmpregados);
        printf("Deseja adicionar outro empregado? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    // Exibir os dados dos empregados
    exibirEmpregados(empregados, numEmpregados);

    return 0;
}

