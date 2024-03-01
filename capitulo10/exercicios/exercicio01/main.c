#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Erro ao alocar memória.\n");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir elemento na pilha (push)
void push(Node** top, int data) {
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("%d inserido na pilha.\n", data);
}

// Função para remover elemento da pilha (pop)
int pop(Node** top) {
    if (*top == NULL) {
        printf("Pilha vazia. Nada para remover.\n");
        return -1;
    }
    Node* temp = *top;
    int poppedData = temp->data;
    *top = temp->next;
    free(temp);
    return poppedData;
}

// Função para exibir a pilha
void display(Node* top) {
    if (top == NULL) {
        printf("Pilha vazia.\n");
        return;
    }
    printf("Pilha: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Elemento %d removido da pilha.\n", pop(&top));
    display(top);

    return 0;
}
