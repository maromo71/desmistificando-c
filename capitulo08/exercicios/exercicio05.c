#include <stdio.h>

#define MAX_QUARTOS 100
#define MAX_RESERVAS 100
/**
 * @author Maromo
 * @copybrief criar um sistema de reservas de hotel usando structs para representar quartos (número, tipo, disponibilidade) e reservas, podemos seguir os seguintes passos:
    Definir uma struct para representar um quarto de hotel, incluindo número, tipo (por exemplo, simples, duplo, suíte) e disponibilidade.
    Definir uma struct para representar uma reserva de hotel, incluindo o número do quarto e as datas de check-in e check-out.
    Implementar funções para adicionar quartos, verificar disponibilidade, fazer reservas e exibir informações sobre quartos e reservas.
   @since fev 2024
 *
 */
// Enumeração para representar o tipo de quarto
enum TipoQuarto {
    SIMPLES,
    DUPLO,
    SUITE
};

// Struct para representar um quarto de hotel
struct Quarto {
    int numero;
    enum TipoQuarto tipo;
    int disponibilidade; // 1 - disponível, 0 - ocupado
};

// Struct para representar uma reserva de hotel
struct Reserva {
    int numeroQuarto;
    char dataCheckIn[11]; // Formato: "dd/mm/aaaa"
    char dataCheckOut[11]; // Formato: "dd/mm/aaaa"
};

// Função para adicionar um quarto à lista de quartos
void adicionarQuarto(struct Quarto quartos[], int *numQuartos, int numero, enum TipoQuarto tipo) {
    if (*numQuartos >= MAX_QUARTOS) {
        printf("A lista de quartos está cheia.\n");
        return;
    }

    quartos[*numQuartos].numero = numero;
    quartos[*numQuartos].tipo = tipo;
    quartos[*numQuartos].disponibilidade = 1; // Quarto é inicialmente disponível
    (*numQuartos)++;
}

// Função para fazer uma reserva de hotel
void fazerReserva(struct Quarto quartos[], int numQuartos, struct Reserva reservas[], int *numReservas) {
    int numeroQuarto;
    printf("Digite o número do quarto que deseja reservar: ");
    scanf("%d", &numeroQuarto);

    // Verificar se o número do quarto é válido
    int encontrado = 0;
    for (int i = 0; i < numQuartos; i++) {
        if (quartos[i].numero == numeroQuarto) {
            encontrado = 1;
            if (quartos[i].disponibilidade == 1) {
                printf("Quarto disponível. Digite as datas de check-in e check-out (formato: dd/mm/aaaa): ");
                scanf("%s %s", reservas[*numReservas].dataCheckIn, reservas[*numReservas].dataCheckOut);
                reservas[*numReservas].numeroQuarto = numeroQuarto;
                quartos[i].disponibilidade = 0; // Marcar o quarto como ocupado
                (*numReservas)++;
            } else {
                printf("Quarto ocupado. Não é possível fazer a reserva.\n");
            }
            break;
        }
    }
    if (!encontrado) {
        printf("Quarto não encontrado.\n");
    }
}

// Função para exibir informações sobre os quartos e suas reservas
void exibirQuartosEReservas(struct Quarto quartos[], int numQuartos, struct Reserva reservas[], int numReservas) {
    printf("Quartos:\n");
    for (int i = 0; i < numQuartos; i++) {
        printf("Número: %d, Tipo: %s, Disponibilidade: %s\n", quartos[i].numero,
               quartos[i].tipo == SIMPLES ? "Simples" : (quartos[i].tipo == DUPLO ? "Duplo" : "Suíte"),
               quartos[i].disponibilidade == 1 ? "Disponível" : "Ocupado");
    }
    printf("\nReservas:\n");
    for (int i = 0; i < numReservas; i++) {
        printf("Número do Quarto: %d, Check-in: %s, Check-out: %s\n", reservas[i].numeroQuarto,
               reservas[i].dataCheckIn, reservas[i].dataCheckOut);
    }
}

int main() {
    struct Quarto quartos[MAX_QUARTOS];
    int numQuartos = 0;
    struct Reserva reservas[MAX_RESERVAS];
    int numReservas = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar quarto\n");
        printf("2. Fazer reserva\n");
        printf("3. Exibir quartos e reservas\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o número do quarto: ");
                int numero;
                scanf("%d", &numero);
                printf("Digite o tipo do quarto (0 - Simples, 1 - Duplo, 2 - Suíte): ");
                int tipo;
                scanf("%d", &tipo);
                adicionarQuarto(quartos, &numQuartos, numero, (enum TipoQuarto) tipo);
                break;
            case 2:
                fazerReserva(quartos, numQuartos, reservas, &numReservas);
                break;
            case 3:
                exibirQuartosEReservas(quartos, numQuartos, reservas, numReservas);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
