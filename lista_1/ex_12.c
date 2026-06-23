#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    if (salario > 3000) salario *= 1.05;
    else salario *= 1.10;

    printf("Final: %.2f", salario);

    return 0;
}