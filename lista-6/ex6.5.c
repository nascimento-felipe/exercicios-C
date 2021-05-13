/*
    Arquivo: ex6.5.c
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

    if(numeroFornecido > 0){
        printf("Raiz quadrada de %.2f: %.2f", numeroFornecido, sqrt(numeroFornecido));
    } else {
        printf("Quadrado de %.2f: %.2f", numeroFornecido, pow(numeroFornecido, 2));
    }

    return 0;
}
