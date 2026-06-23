#include <stdio.h>

int main() {
    int primeiroNumero;
    int segundoNumero;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    if (primeiroNumero <= segundoNumero) {
        for (int numero = primeiroNumero; numero <= segundoNumero; numero++) {
            printf("%d\n", numero);
        }
    } else {
        for (int numero = primeiroNumero; numero >= segundoNumero; numero--) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
