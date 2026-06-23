#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int contador = numero; contador >= 0; contador--) {
        printf("%d\n", contador);
    }

    return 0;
}
