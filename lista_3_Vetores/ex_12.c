#include <stdio.h>

int main() {
    int numeros[6];
    int maiorValor;
    int segundoMaiorValor;

    for (int indice = 0; indice < 6; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    if (numeros[0] > numeros[1]) {
        maiorValor = numeros[0];
        segundoMaiorValor = numeros[1];
    } else {
        maiorValor = numeros[1];
        segundoMaiorValor = numeros[0];
    }

    for (int indice = 2; indice < 6; indice++) {
        if (numeros[indice] > maiorValor) {
            segundoMaiorValor = maiorValor;
            maiorValor = numeros[indice];
        } else if (numeros[indice] > segundoMaiorValor && numeros[indice] != maiorValor) {
            segundoMaiorValor = numeros[indice];
        }
    }

    printf("\nMaior valor: %d\n", maiorValor);
    printf("Segundo maior valor: %d\n", segundoMaiorValor);

    return 0;
}
