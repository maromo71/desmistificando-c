#include <stdio.h>
#include <stdlib.h>

typedef struct MemoryBlock {
    void* address;
    size_t size;
    struct MemoryBlock* next;
} MemoryBlock;

MemoryBlock* head = NULL;

// Função para adicionar um bloco de memória à lista de controle
void addMemoryBlock(void* address, size_t size) {
    MemoryBlock* block = (MemoryBlock*)malloc(sizeof(MemoryBlock));
    if (block == NULL) {
        printf("Falha ao alocar memória para o bloco de controle.\n");
        exit(1);
    }
    block->address = address;
    block->size = size;
    block->next = head;
    head = block;
}

// Função para remover um bloco de memória da lista de controle
void removeMemoryBlock(void* address) {
    MemoryBlock **ptr = &head, *temp;
    while (*ptr != NULL) {
        if ((*ptr)->address == address) {
            temp = *ptr;
            *ptr = (*ptr)->next;
            free(temp);
            return;
        }
        ptr = &(*ptr)->next;
    }
    printf("Tentativa de liberar memória não rastreada: %p\n", address);
}

// Função para simular alocação de memória com rastreamento
void* myMalloc(size_t size) {
    void* address = malloc(size);
    if (address == NULL) {
        printf("Falha ao alocar memória.\n");
        return NULL;
    }
    addMemoryBlock(address, size);
    return address;
}

// Função para simular liberação de memória com rastreamento
void myFree(void* address) {
    removeMemoryBlock(address);
    free(address);
}

// Função para verificar e relatar vazamentos de memória
void reportMemoryLeaks() {
    MemoryBlock* current = head;
    if (current == NULL) {
        printf("Nenhum vazamento de memória detectado.\n");
    } else {
        printf("Vazamento(s) de memória detectado(s):\n");
        while (current != NULL) {
            printf("Endereço: %p, Tamanho: %zu bytes\n", current->address, current->size);
            current = current->next;
        }
    }
}

int main() {
    // Exemplo de uso
    int* num = (int*)myMalloc(sizeof(int));
    *num = 10;
    myFree(num);

    // Checar por vazamentos de memória
    reportMemoryLeaks();

    return 0;
}

