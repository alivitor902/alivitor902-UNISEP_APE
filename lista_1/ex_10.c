#include <stdio.h>

int main() {
    float peso, altura, imc;

    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) printf("Abaixo do peso");
    else if (imc < 25) printf("Normal");
    else if (imc < 30) printf("Sobrepeso");
    else printf("Obesidade");

    return 0;
}