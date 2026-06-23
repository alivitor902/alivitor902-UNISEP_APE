#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
    }

    return 0;
}
