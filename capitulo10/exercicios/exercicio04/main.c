#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações da reserva
typedef struct Reservation {
    char guestName[100]; // Aumentado para acomodar nomes maiores
    int roomNumber;
    char checkInDate[11]; // Incluindo espaço para o caractere nulo
    char checkOutDate[11];
    struct Reservation* next;
} Reservation;

// Função para criar uma nova reserva
Reservation* createReservation(char* guestName, int roomNumber, char* checkInDate, char* checkOutDate) {
    Reservation* newReservation = (Reservation*)malloc(sizeof(Reservation));
    if (newReservation == NULL) {
        printf("Erro ao alocar memória para nova reserva.\n");
        return NULL; // Retorno NULL para indicar falha na alocação
    }
    strncpy(newReservation->guestName, guestName, sizeof(newReservation->guestName) - 1);
    newReservation->guestName[sizeof(newReservation->guestName) - 1] = '\0'; // Garante terminação
    newReservation->roomNumber = roomNumber;
    strncpy(newReservation->checkInDate, checkInDate, sizeof(newReservation->checkInDate) - 1);
    newReservation->checkInDate[sizeof(newReservation->checkInDate) - 1] = '\0';
    strncpy(newReservation->checkOutDate, checkOutDate, sizeof(newReservation->checkOutDate) - 1);
    newReservation->checkOutDate[sizeof(newReservation->checkOutDate) - 1] = '\0';
    newReservation->next = NULL;
    return newReservation;
}

// Função para adicionar uma reserva na lista
void addReservation(Reservation** head, char* guestName, int roomNumber, char* checkInDate, char* checkOutDate) {
    Reservation* newReservation = createReservation(guestName, roomNumber, checkInDate, checkOutDate);
    if (newReservation == NULL) return; // Se falhar, sai da função

    if (*head == NULL) {
        *head = newReservation;
    } else {
        Reservation* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newReservation;
    }
    printf("Reserva adicionada com sucesso.\n");
}

// Função para exibir todas as reservas
void displayReservations(Reservation* head) {
    if (head == NULL) {
        printf("Nenhuma reserva cadastrada.\n");
        return;
    }
    while (head != NULL) {
        printf("Hóspede: %s, Quarto: %d, Check-in: %s, Check-out: %s\n",
               head->guestName, head->roomNumber, head->checkInDate, head->checkOutDate);
        head = head->next;
    }
}

// Função para liberar a memória das reservas
void freeReservations(Reservation** head) {
    while (*head != NULL) {
        Reservation* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    Reservation* head = NULL;

    addReservation(&head, "João Silva", 101, "2024-01-01", "2024-01-10");
    addReservation(&head, "Maria Souza", 102, "2024-02-15", "2024-02-20");

    displayReservations(head);

    freeReservations(&head); // Importante para evitar vazamento de memória

    return 0;
}
