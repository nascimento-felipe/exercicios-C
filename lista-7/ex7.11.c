/*
    Arquivo: ex7.11.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int obtemNumero( int );

int obtemDigito( int );

int calculaDigito( int );

bool numeroCorreto( int );

int main() {

    int n;

    printf("Numero: ");
    scanf("%d", &n);

    if(n >= 10 && n <= 99999){

        int numeroSemDigito = obtemNumero(n);

        printf("Numero completo: %d\n", n);
        printf("Numero: %d\n", numeroSemDigito);
        printf("Digito: %d\n", obtemDigito(n));
        printf("Digito calculado: %d\n", calculaDigito(numeroSemDigito));

        printf("O numero fornecido esta ");
        if(numeroCorreto(n)){
            printf("correto!");
        } else {
            printf("incorreto!");
        }
    }

    return 0;
}

int obtemNumero( int n ) {

    // "DE"zena de "M"ilhar
    int deM = 0;
    int mil = 0;
    int cen = 0;
    int dez = 0;
    int numeroCompleto;

    if(n / 10000 > 0) {
        deM = n / 10000;
        n = n % 10000;
    }
    if(n / 1000 > 0) {
        mil = n / 1000;
        n = n % 1000;
    }
    if(n / 100 > 0) {
        cen = n / 100;
        n = n % 100;
    }
    if(n / 10 > 0) {
        dez = n / 10;
    }

    /* depois das divisões, eu pego cada casa decimal e multiplico
        pelo valor da casa anterior, e.g.: Dezena de Milhar * 1000
        ou Centena * 10. Fazendo isso eu consigo o valor do número real
        e também não conto a "unidade", que é o dígito verificador.
    */
    deM *= 1000;
    mil *= 100;
    cen *= 10;

    numeroCompleto = deM + mil + cen + dez;

    return numeroCompleto;

}

int obtemDigito( int n ) {

    return n % 10;
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

bool numeroCorreto( int n ){

    int numeroSozinho = obtemNumero(n);
    int digitoDigitado = obtemDigito(n);
    int digitoReal = calculaDigito(numeroSozinho);

    if(digitoReal != digitoDigitado){
        return false;
    }

    return true;
}
