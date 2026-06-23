#include <stdio.h>

int main() {
    int numero;
    int ehPrimo = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
        for (int divisor = 2; divisor <= numero / 2; divisor++) {
            if (numero % divisor == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
