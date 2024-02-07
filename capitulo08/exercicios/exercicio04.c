#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

/**
 * @author Maromo
 * @brief implementar o gerenciamento de uma biblioteca usando structs para representar livros (título, autor, ano)
 */
// Definição da struct para representar um livro
struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
};

// Função para adicionar um novo livro à biblioteca
void adicionarLivro(struct Livro biblioteca[], int *numLivros) {
    if (*numLivros >= MAX_LIVROS) {
        printf("A biblioteca está cheia. Não é possível adicionar mais livros.\n");
        return;
    }

    printf("Digite o título do livro: ");
    scanf(" %[^\n]%*c", biblioteca[*numLivros].titulo);

    printf("Digite o nome do autor: ");
    scanf(" %[^\n]%*c", biblioteca[*numLivros].autor);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &biblioteca[*numLivros].ano);

    (*numLivros)++;
}

// Função para buscar um livro na biblioteca pelo título
void buscarLivroPorTitulo(struct Livro biblioteca[], int numLivros, char titulo[]) {
    int encontrado = 0;
    for (int i = 0; i < numLivros; i++) {
        if (strcmp(biblioteca[i].titulo, titulo) == 0) {
            printf("Livro encontrado:\n");
            printf("Título: %s\n", biblioteca[i].titulo);
            printf("Autor: %s\n", biblioteca[i].autor);
            printf("Ano de publicacao: %d\n", biblioteca[i].ano);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Livro não encontrado na biblioteca.\n");
    }
}

int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int numLivros = 0;
    int opcao;
    char tituloBusca[100];

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar livro\n");
        printf("2. Buscar livro por título\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarLivro(biblioteca, &numLivros);
                break;
            case 2:
                printf("Digite o título do livro que deseja buscar: ");
                scanf(" %[^\n]%*c", tituloBusca);
                buscarLivroPorTitulo(biblioteca, numLivros, tituloBusca);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}

