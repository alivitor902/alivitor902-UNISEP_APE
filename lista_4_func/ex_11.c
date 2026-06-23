#include <stdio.h>

int calcularMDC(int primeiroNumero, int segundoNumero) {
    int resto;

    while (segundoNumero != 0) {
        resto = primeiroNumero % segundoNumero;
        primeiroNumero = segundoNumero;
        segundoNumero = resto;
    }

    return primeiroNumero;
}

int main() {
    int primeiroNumero;
    int segundoNumero;
    int mdc;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    mdc = calcularMDC(primeiroNumero, segundoNumero);

    printf("MDC: %d\n", mdc);

    return 0;
}
