#include <stdio.h>

unsigned long long calcularFatorial(int numero) {
    unsigned long long fatorial = 1;

    for (int contador = 1; contador <= numero; contador++) {
        fatorial *= contador;
    }

    return fatorial;
}

int main() {
    int numero;
    unsigned long long resultado;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        resultado = calcularFatorial(numero);
        printf("Fatorial de %d: %llu\n", numero, resultado);
    }

    return 0;
}
