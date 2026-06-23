#include <stdio.h>

int verificarParidade(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }

    return 0;
}

int main() {
    int numero;
    int resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado = verificarParidade(numero);

    if (resultado == 1) {
        printf("Retorno: 1\n");
        printf("O número é par.\n");
    } else {
        printf("Retorno: 0\n");
        printf("O número é ímpar.\n");
    }

    return 0;
}
