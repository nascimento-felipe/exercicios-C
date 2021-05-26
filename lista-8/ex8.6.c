/*
    Arquivo: ex8.6.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

void produtoInterno( const double *a1, const double *a2, double *pi, int n );

int main() {

    double a1[5];
    double a2[5];
    double pi[5];
    int quantidade = 5;

    // entrada do array 1
    for(int i = 0; i < quantidade; i++){
        printf("a1[%d]: ", i);
        scanf("%lf", &a1[i]);
    }

    // entrada do array 2
    for(int i = 0; i < quantidade; i++){
        printf("a2[%d]: ", i);
        scanf("%lf", &a2[i]);
    }

    // invocação da função
    produtoInterno( a1, a2, pi, quantidade);

    // saída
    printf("\n");

    for(int i = 0; i < quantidade; i++){
        printf("\n%.2lf x %.2lf = %.2lf", a1[i], a2[i], pi[i]);
    }

    return 0;
}

void produtoInterno( const double *a1, const double *a2, double *pi, int n ) {

    for(int i = 0; i < n; i++) {
        pi[i] = a1[i] * a2[i];
    }

}