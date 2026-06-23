#include <stdio.h>

int main() {
    int numeros[6];
    int menorValor;

    for (int indice = 0; indice < 6; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    menorValor = numeros[0];

    for (int indice = 1; indice < 6; indice++) {
        if (numeros[indice] < menorValor) {
            menorValor = numeros[indice];
        }
    }

    printf("\nMenor valor: %d\n", menorValor);

    return 0;
}
