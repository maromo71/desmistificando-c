#include <stdio.h>
#include <string.h>
/**
 * @since fev 2024
 * @author Maromo
 * @brief Converter uma data no formato "AAAA-MM-DD" para "DD/MM/AAAA"
 */
void formatarData(char *data) {
    int ano, mes, dia;
    sscanf(data, "%d-%d-%d", &ano, &mes, &dia);
    sprintf(data, "%02d/%02d/%04d", dia, mes, ano);
}

int main() {
    char data[11];
    printf("Digite uma data no formato AAAA-MM-DD: ");
    scanf("%s", data);
    formatarData(data);
    printf("Data formatada: %s\n", data);
    return 0;
}

