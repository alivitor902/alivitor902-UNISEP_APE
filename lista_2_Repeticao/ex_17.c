#include <stdio.h>

int main() {
    int idade;
    int somaIdades = 0;
    int quantidadeIdades = 0;
    float media;

    do {
        printf("Digite uma idade ou 0 para encerrar: ");
        scanf("%d", &idade);

        if (idade > 0) {
            somaIdades += idade;
            quantidadeIdades++;
        }
    } while (idade != 0);

    if (quantidadeIdades > 0) {
        media = (float) somaIdades / quantidadeIdades;
        printf("Média das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida foi digitada.\n");
    }

    return 0;
}
