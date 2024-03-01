#include <stdio.h>
#define PI 3.14159
#define VOLUME_ESFERA(r) ((4.0 / 3.0) * PI * (r) * (r) * (r))

int main() {
    double raio[] = {3, 4, 5}; // Exemplos de raios
    for (int i = 0; i < 3; i++) {
        printf("Volume da esfera com raio %.2f: %.2f\n", raio[i], VOLUME_ESFERA(raio[i]));
    }
    return 0;
}
