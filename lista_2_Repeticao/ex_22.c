#include <stdio.h>

int main() {
    for (int numero = 1; numero <= 100; numero++) {
        if (numero % 3 == 0 && numero % 5 == 0) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
