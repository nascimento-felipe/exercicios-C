/*
    Arquivo: 7.2.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaCirculo( float raio);

float circunferenciaRaio( float raio);

int main() {

    float raio;

    // entrada do raio
    printf("Raio: ");
    scanf("%f", &raio);

    // saida
    printf("Area = %.2f\n", areaCirculo(raio));
    printf("Circunferencia = %.2f", circunferenciaRaio(raio));

    return 0;
}

float areaCirculo(float raio) {

    const double PI = acos(-1);
    float area;

    area = PI * (raio * raio);

    return area;
}

float circunferenciaRaio(float raio) {

    const double PI = acos(-1);
    float circunferencia;

    circunferencia = 2 * PI * raio;

    return circunferencia;
}
