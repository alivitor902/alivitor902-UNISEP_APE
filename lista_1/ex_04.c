#include <stdio.h>

int main() {
    float nota;
    scanf("%f", &nota);

    if (nota >= 7) printf("Aprovado");
    else if (nota >= 5) printf("Recuperacao");
    else printf("Reprovado");

    return 0;
}