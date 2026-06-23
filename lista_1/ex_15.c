#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);

    if (idade < 16) printf("Nao pode votar");
    else if ((idade <= 17) || (idade > 70)) printf("Opcional");
    else printf("Obrigatorio");

    return 0;
}