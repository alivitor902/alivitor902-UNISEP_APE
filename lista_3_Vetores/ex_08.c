#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    float media;

    for (int indice = 0; indice < 10; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    for (int indice = 0; indice < 10; indice++) {
        soma += numeros[indice];
    }

    media = soma / 10.0;

    printf("\nMédia: %.2f\n", media);
    printf("Valores maiores que a média:\n");

    for (int indice = 0; indice < 10; indice++) {
        if (numeros[indice] > media) {
            printf("%d\n", numeros[indice]);
        }
    }

    return 0;
}
