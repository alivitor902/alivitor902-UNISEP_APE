#include <stdio.h>

float calcularMediaVetor(int vetor[], int tamanho) {
    int soma = 0;

    for (int indice = 0; indice < tamanho; indice++) {
        soma += vetor[indice];
    }

    return (float) soma / tamanho;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 0;
    }

    int vetor[tamanho];

    for (int indice = 0; indice < tamanho; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &vetor[indice]);
    }

    float media = calcularMediaVetor(vetor, tamanho);

    printf("Média dos elementos: %.2f\n", media);

    return 0;
}
