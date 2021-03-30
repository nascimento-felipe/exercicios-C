#include <stdio.h>
#include <stdlib.h>

int main() {
    float grausFahrenheit;
    float grausCelsius;

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &grausFahrenheit);

    grausCelsius = (grausFahrenheit - 32) / 1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", grausFahrenheit, grausCelsius);

    return 0;
}
