#include <stdio.h>

int main() {
    int numeros[5];

    for (int indice = 0; indice < 5; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    printf("\nValores digitados:\n");
    for (int indice = 0; indice < 5; indice++) {
        printf("%d\n", numeros[indice]);
    }

    return 0;
}
