#include <stdio.h>

float converterCelsiusParaFahrenheit(float temperaturaCelsius) {
    return (temperaturaCelsius * 9 / 5) + 32;
}

int main() {
    float temperaturaCelsius;
    float temperaturaFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);

    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaFahrenheit);

    return 0;
}
