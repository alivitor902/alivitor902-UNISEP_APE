#include <stdio.h>
#include <string.h>

void inverterTexto(char texto[]) {
    int inicio = 0;
    int fim = strlen(texto) - 1;
    char auxiliar;

    while (inicio < fim) {
        auxiliar = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = auxiliar;

        inicio++;
        fim--;
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra ou texto sem espaços: ");
    scanf("%99s", texto);

    inverterTexto(texto);

    printf("Texto invertido: %s\n", texto);

    return 0;
}
