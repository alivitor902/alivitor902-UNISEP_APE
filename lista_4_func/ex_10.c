#include <stdio.h>
#include <ctype.h>

int verificarVogal(char caractere) {
    caractere = tolower(caractere);

    if (
        caractere == 'a' ||
        caractere == 'e' ||
        caractere == 'i' ||
        caractere == 'o' ||
        caractere == 'u'
    ) {
        return 1;
    }

    return 0;
}

int contarVogais(char texto[]) {
    int quantidadeVogais = 0;

    for (int indice = 0; texto[indice] != '\0'; indice++) {
        if (verificarVogal(texto[indice]) == 1) {
            quantidadeVogais++;
        }
    }

    return quantidadeVogais;
}

int main() {
    char texto[100];
    int quantidadeVogais;

    printf("Digite uma palavra ou texto sem espaços: ");
    scanf("%99s", texto);

    quantidadeVogais = contarVogais(texto);

    printf("Quantidade de vogais: %d\n", quantidadeVogais);

    return 0;
}
