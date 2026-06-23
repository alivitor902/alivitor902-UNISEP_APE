#include <stdio.h>

int main() {
    int numeros[8];
    int soma = 0;

    for (int indice = 0; indice < 8; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    for (int indice = 0; indice < 8; indice++) {
        soma += numeros[indice];
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
