#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char* description;
} Photo;

typedef struct {
    Photo** photos;
    int size;
    int capacity;
} Album;

Album* createAlbum() {
    Album* album = (Album*)malloc(sizeof(Album));
    if (album == NULL) {
        printf("Falha ao alocar memória para o álbum.\n");
        exit(1);
    }
    album->size = 0;
    album->capacity = 10; // Capacidade inicial
    album->photos = (Photo**)malloc(sizeof(Photo*) * album->capacity);
    if (album->photos == NULL) {
        printf("Falha ao alocar memória para as fotos.\n");
        free(album);
        exit(1);
    }
    return album;
}

void addPhoto(Album* album, int id, const char* description) {
    if (album->size == album->capacity) {
        // Realocar memória se necessário
        album->capacity *= 2;
        album->photos = (Photo**)realloc(album->photos, sizeof(Photo*) * album->capacity);
        if (album->photos == NULL) {
            printf("Falha ao realocar memória para as fotos.\n");
            exit(1);
        }
    }
    Photo* newPhoto = (Photo*)malloc(sizeof(Photo));
    if (newPhoto == NULL) {
        printf("Falha ao alocar memória para a nova foto.\n");
        exit(1);
    }
    newPhoto->id = id;
    newPhoto->description = strdup(description); // Copiar descrição
    album->photos[album->size++] = newPhoto;
}

void displayAlbum(Album* album) {
    printf("Álbum de Fotos:\n");
    for (int i = 0; i < album->size; i++) {
        Photo* photo = album->photos[i];
        printf("Foto %d: %s\n", photo->id, photo->description);
    }
}

void freeAlbum(Album* album) {
    for (int i = 0; i < album->size; i++) {
        free(album->photos[i]->description);
        free(album->photos[i]);
    }
    free(album->photos);
    free(album);
}

int main() {
    Album* meuAlbum = createAlbum();
    addPhoto(meuAlbum, 1, "Praia durante o verão");
    addPhoto(meuAlbum, 2, "Montanhas cobertas de neve");
    // Adicionar mais fotos conforme desejado

    displayAlbum(meuAlbum);

    // Liberar recursos
    freeAlbum(meuAlbum);

    return 0;
}
