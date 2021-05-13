/*
    Arquivo: ex6.4.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float numeroFornecido;

    // entrada do numero
    printf("Numero: ");
    scanf("%f", &numeroFornecido);

    // saida
    printf("Valor absoluto: %.2f", fabs(numeroFornecido));

    return 0;
}
