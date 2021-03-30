#include <stdio.h>
#include <stdlib.h>

int main() {
    float grausCelsius;
    float grausFahrenheit;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);

    grausFahrenheit = grausCelsius * 1.8 + 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", grausCelsius, grausFahrenheit);

    return 0;
}
