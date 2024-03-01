#include <stdio.h>

#define FOR(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n = 5; // Número de iterações desejado

    FOR(i, n) {
        printf("Iteração %d\n", i);
    }

    return 0;
}
