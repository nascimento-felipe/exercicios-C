/*
    Arquivo: ex6.2.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


    float base;
    float expoente;
    float resultado;

    // entrada da base
    printf("Base: ");
    scanf("%f", &base);

    // entrada do expoente
    printf("Expoente: ");
    scanf("%f", &expoente);

    // saída
    printf("%.2f ^ %.2f = %.2f", base, expoente, pow(base, expoente));

    return 0;
}
