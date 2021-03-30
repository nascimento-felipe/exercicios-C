#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio;
    float pi = 3.141592;
    float diametro;
    float circunferencia;
    float area;

    printf("Valor do raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f", area);
    return 0;
}
