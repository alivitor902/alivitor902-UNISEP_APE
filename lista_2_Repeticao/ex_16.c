#include <stdio.h>

int main() {
    int numero;
    int quantidadeDigitada = 0;

    do {
        printf("Digite um número negativo para encerrar: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            quantidadeDigitada++;
        }
    } while (numero >= 0);

    printf("Quantidade de números digitados antes do negativo: %d\n", quantidadeDigitada);

    return 0;
}
