#include <stdio.h>

int main() {
    int numeros[10];
    int auxiliar;

    for (int indice = 0; indice < 10; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] < numeros[j + 1]) {
                auxiliar = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = auxiliar;
            }
        }
    }

    printf("\nVetor em ordem decrescente:\n");
    for (int indice = 0; indice < 10; indice++) {
        printf("%d\n", numeros[indice]);
    }

    return 0;
}
