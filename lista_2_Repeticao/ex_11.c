#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        for (int contador = 1; contador <= numero; contador++) {
            fatorial *= contador;
        }

        printf("Fatorial de %d: %llu\n", numero, fatorial);
    }

    return 0;
}
