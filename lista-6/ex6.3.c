/*
    Arquivo: ex6.3.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float numeroFornecido;

    //entrada do n�mero
    printf("Numero: ");
    scanf("%f", &numeroFornecido);

    // sa�da
    printf("Maior inteiro mais proximo: %.2f\n", ceil(numeroFornecido));
    printf("Menor inteiro mais proximo: %.2f", floor(numeroFornecido));

    return 0;
}
