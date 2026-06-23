#include <stdio.h>

int main() {
    float peso;

    scanf("%f", &peso);

    if (peso <= 5) printf("R$10");
    else if (peso <= 20) printf("R$20");
    else printf("R$50");

    return 0;
}