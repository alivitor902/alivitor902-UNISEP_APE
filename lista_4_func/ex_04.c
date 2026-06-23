#include <stdio.h>

int encontrarMaiorNumero(int primeiroNumero, int segundoNumero, int terceiroNumero) {
    int maiorNumero = primeiroNumero;

    if (segundoNumero > maiorNumero) {
        maiorNumero = segundoNumero;
    }

    if (terceiroNumero > maiorNumero) {
        maiorNumero = terceiroNumero;
    }

    return maiorNumero;
}

int main() {
    int primeiroNumero;
    int segundoNumero;
    int terceiroNumero;
    int maiorNumero;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    printf("Digite o terceiro número: ");
    scanf("%d", &terceiroNumero);

    maiorNumero = encontrarMaiorNumero(primeiroNumero, segundoNumero, terceiroNumero);

    printf("Maior número: %d\n", maiorNumero);

    return 0;
}
