#include <stdio.h>

int verificarNumeroPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int divisor = 2; divisor <= numero / 2; divisor++) {
        if (numero % divisor == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero;
    int ehPrimo;

    printf("Digite um número: ");
    scanf("%d", &numero);

    ehPrimo = verificarNumeroPrimo(numero);

    if (ehPrimo == 1) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
