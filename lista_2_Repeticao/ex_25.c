#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    for (int linha = 1; linha <= tamanho; linha++) {
        for (int coluna = 1; coluna <= tamanho; coluna++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
