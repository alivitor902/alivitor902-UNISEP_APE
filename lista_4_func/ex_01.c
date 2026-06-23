#include <stdio.h>

int somarNumeros(int primeiroNumero, int segundoNumero) {
    return primeiroNumero + segundoNumero;
}

int main() {
    int primeiroNumero;
    int segundoNumero;
    int resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    resultado = somarNumeros(primeiroNumero, segundoNumero);

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
