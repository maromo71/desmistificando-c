#include <stdio.h>
// Descomente a linha abaixo para ativar a depuração
// #define DEBUG

int main() {
#ifdef DEBUG
    printf("Modo de depuração ativado.\n");
#else
    printf("Modo de depuração desativado.\n");
#endif
    return 0;
}
