#include <stdio.h>

int calcularQuadrado(int numero) {
    return numero * numero;
}

int main() {
    int numero;
    int quadrado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    quadrado = calcularQuadrado(numero);

    printf("Quadrado de %d: %d\n", numero, quadrado);

    return 0;
}
