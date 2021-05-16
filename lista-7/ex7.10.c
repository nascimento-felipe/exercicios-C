/*
    Arquivo: ex7.10.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

int calculaDigito( int );

int main() {

    int n;

    // entrada do numero
    printf("Numero: ");
    scanf("%d", &n);

    // saída do programa, se o número estiver dentro da faixa estabelecida
    if(n > 1 && n < 9999){
        printf("Digito verificador de %d: %d\n", n, calculaDigito(n));
    }

    return 0;
}

int calculaDigito( int n ){

    int mil = 0;
    int cen = 0;
    int dez = 0;
    int uni = 0;
    int soma;
    int digitoVerificador;

    // verificações do milhar, centena, dezena e unidade
    if(n / 1000 > 0){
        mil = n / 1000;
        n = n % 1000;
    }

    if(n / 100 > 0){
        cen = n / 100;
        n = n % 100;
    }

    if(n / 10 > 0){
        dez = n / 10;
        n = n % 10;
    }

    if(n / 1 > 0){
        uni = n / 1;
    }

    // a soma e, depois, o cálculo do dígito verificador
    soma = (mil * 5) + (cen * 4) + (dez * 3) + (uni * 2);

    digitoVerificador = 11 - (soma % 11);

    // caso o dígito for 10 ou 11, o dígito se torna 0
    if(digitoVerificador == 10 || digitoVerificador == 11){
        digitoVerificador = 0;
    }

    return digitoVerificador;
}
