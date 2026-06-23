#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int contador = 1; contador <= numero; contador++) {
        printf("%d\n", contador);
    }

    return 0;
}
