#include <stdio.h>

int main() {
    int numeros[10];

    for (int indice = 0; indice < 10; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    printf("\nNúmeros pares:\n");
    for (int indice = 0; indice < 10; indice++) {
        if (numeros[indice] % 2 == 0) {
            printf("%d\n", numeros[indice]);
        }
    }

    return 0;
}
