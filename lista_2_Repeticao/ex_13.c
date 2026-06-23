#include <stdio.h>

int main() {
    int somaImpares = 0;

    for (int numero = 1; numero <= 100; numero++) {
        if (numero % 2 != 0) {
            somaImpares += numero;
        }
    }

    printf("Soma dos números ímpares entre 1 e 100: %d\n", somaImpares);

    return 0;
}
