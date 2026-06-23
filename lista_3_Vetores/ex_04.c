#include <stdio.h>

int main() {
    int numeros[6];
    int maiorValor;

    for (int indice = 0; indice < 6; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    maiorValor = numeros[0];

    for (int indice = 1; indice < 6; indice++) {
        if (numeros[indice] > maiorValor) {
            maiorValor = numeros[indice];
        }
    }

    printf("\nMaior valor: %d\n", maiorValor);

    return 0;
}
