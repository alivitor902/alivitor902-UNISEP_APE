#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 0;
    }

    int numeros[tamanho];

    for (int indice = 0; indice < tamanho; indice++) {
        printf("Digite o %dº número: ", indice + 1);
        scanf("%d", &numeros[indice]);
    }

    int numeroMaisRepetido = numeros[0];
    int maiorQuantidadeRepeticoes = 1;

    for (int i = 0; i < tamanho; i++) {
        int quantidadeAtual = 0;

        for (int j = 0; j < tamanho; j++) {
            if (numeros[i] == numeros[j]) {
                quantidadeAtual++;
            }
        }

        if (quantidadeAtual > maiorQuantidadeRepeticoes) {
            maiorQuantidadeRepeticoes = quantidadeAtual;
            numeroMaisRepetido = numeros[i];
        }
    }

    printf("\nNúmero que mais se repete: %d\n", numeroMaisRepetido);
    printf("Quantidade de repetições: %d\n", maiorQuantidadeRepeticoes);

    return 0;
}
