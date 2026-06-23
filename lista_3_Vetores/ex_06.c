#include <stdio.h>

int main() {
    int numeros[10];
    int quantidadePositivos = 0;

    for (int indice = 0; indice < 10; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    for (int indice = 0; indice < 10; indice++) {
        if (numeros[indice] > 0) {
            quantidadePositivos++;
        }
    }

    printf("\nQuantidade de números positivos: %d\n", quantidadePositivos);

    return 0;
}
