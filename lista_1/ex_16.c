#include <stdio.h>

int main() {
    float consumo, total;

    scanf("%f", &consumo);

    if (consumo <= 100) total = consumo * 0.5;
    else if (consumo <= 200) total = consumo * 0.75;
    else total = consumo * 1.0;

    printf("Total: %.2f", total);

    return 0;
}