#include <stdio.h>
#include <libc.h>

void limpaTela() {
    // Implementação específica para o sistema operacional (pode variar)
    system("clear"); // Para sistemas Unix/Linux
    // system("cls"); // Para sistemas Windows
}

int main() {
    printf("Texto na tela.\n");
    limpaTela();
    printf("Tela limpa.\n");

    return 0;
}

