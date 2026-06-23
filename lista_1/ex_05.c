#include <stdio.h>

int main() {
    float valor;
    scanf("%f", &valor);

    if (valor > 100) valor *= 0.9;
    else valor *= 0.95;

    printf("Valor final: %.2f", valor);

    return 0;
}