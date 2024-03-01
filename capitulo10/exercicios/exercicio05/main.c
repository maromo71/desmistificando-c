#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para um Nó
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Função para criar um novo Nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(0);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um Nó no início da lista
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    printf("Nó com valor %d inserido no início.\n", data);
}

// Função para inserir um Nó no final da lista
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Nó com valor %d inserido no final.\n", data);
}

// Função para deletar um Nó da lista
void deleteNode(Node** head, int data) {
    Node* temp = *head;
    if (temp == NULL) {
        printf("Lista vazia, não é possível deletar.\n");
        return;
    }
    while (temp != NULL && temp->data != data) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Nó com valor %d não encontrado.\n", data);
        return;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
    printf("Nó com valor %d deletado.\n", data);
}

// Função para exibir a lista do início ao fim
void displayForward(Node* head) {
    printf("Exibindo lista do início ao fim:\n");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Função para exibir a lista do fim ao início
void displayBackward(Node* head) {
    Node* tail = head;
    printf("Exibindo lista do fim ao início:\n");
    if (head == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    while (tail->next != NULL) {
        tail = tail->next;
    }
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 1);

    displayForward(head);
    displayBackward(head);

    deleteNode(&head, 20);
    displayForward(head);

    return 0;
}
