#include <stdio.h>

int main() {
    int soma = 0;

    for (int numero = 1; numero <= 10; numero++) {
        soma += numero;
    }

    printf("Soma dos números de 1 até 10: %d\n", soma);

    return 0;
}
