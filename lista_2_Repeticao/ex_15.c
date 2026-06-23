#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    do {
        printf("Digite um número ou 0 para sair: ");
        scanf("%d", &numero);

        soma += numero;
    } while (numero != 0);

    printf("Soma dos números digitados: %d\n", soma);

    return 0;
}
