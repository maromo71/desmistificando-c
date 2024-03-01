#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para os livros
typedef struct Book {
    char title[100];
    char author[100];
    int year;
    struct Book* next;
} Book;

// Função para criar um novo livro
Book* createBook(char* title, char* author, int year) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    if (!newBook) {
        printf("Erro ao alocar memória.\n");
        exit(0);
    }
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    newBook->year = year;
    newBook->next = NULL;
    return newBook;
}

// Função para adicionar um livro à lista
void addBook(Book** head, char* title, char* author, int year) {
    Book* newBook = createBook(title, author, year);
    if (*head == NULL) {
        *head = newBook;
    } else {
        Book* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
    printf("Livro \"%s\" adicionado com sucesso.\n", title);
}

// Função para exibir todos os livros
void displayBooks(Book* head) {
    if (head == NULL) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }
    Book* temp = head;
    while (temp != NULL) {
        printf("Título: %s, Autor: %s, Ano: %d\n", temp->title, temp->author, temp->year);
        temp = temp->next;
    }
}

// Função para buscar um livro pelo título
void searchBookByTitle(Book* head, char* title) {
    Book* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->title, title) == 0) {
            printf("Livro encontrado: Título: %s, Autor: %s, Ano: %d\n", temp->title, temp->author, temp->year);
            return;
        }
        temp = temp->next;
    }
    printf("Livro \"%s\" não encontrado.\n", title);
}

int main() {
    Book* head = NULL;

    addBook(&head, "O Senhor dos Anéis", "J.R.R. Tolkien", 1954);
    addBook(&head, "1984", "George Orwell", 1949);
    addBook(&head, "O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943);

    printf("\nLista de Livros:\n");
    displayBooks(head);

    printf("\nBuscando por '1984':\n");
    searchBookByTitle(head, "1984");

    // Lembre-se de liberar a memória no final (não implementado aqui para simplicidade)

    return 0;
}

