#include <stdio.h>

int main() {
    int numero;
    int maiorNumero = 0;
    int primeiroNumeroValido = 1;

    do {
        printf("Digite um número ou 999 para encerrar: ");
        scanf("%d", &numero);

        if (numero != 999) {
            if (primeiroNumeroValido || numero > maiorNumero) {
                maiorNumero = numero;
                primeiroNumeroValido = 0;
            }
        }
    } while (numero != 999);

    if (primeiroNumeroValido) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        printf("Maior número digitado: %d\n", maiorNumero);
    }

    return 0;
}
