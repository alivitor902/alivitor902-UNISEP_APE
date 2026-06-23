#include <stdio.h>

int main() {
    int quantidadePares = 0;

    for (int numero = 1; numero <= 50; numero++) {
        if (numero % 2 == 0) {
            quantidadePares++;
        }
    }

    printf("Quantidade de números pares entre 1 e 50: %d\n", quantidadePares);

    return 0;
}
