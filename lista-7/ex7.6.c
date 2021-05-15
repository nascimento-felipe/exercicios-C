/*
    Arquivo: ex7.6.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

#define M 5

int lePositivo();

int somaDivisores( int );

int main() {

    int array[M];

    // entrada dos valores do array
    for(int i = 0; i < M; i++){
        printf("n[%d]: ", i);
        array[i] = lePositivo();
    }

    for(int i = 0; i < M; i++){
        printf("Soma dos divisores de %d: %d\n", array[i], somaDivisores(array[i]));
    }

    return 0;
}

int lePositivo() {

    int n;

    scanf("%d", &n);

    while(n < 0){
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    };

    return n;
}

int somaDivisores( int n ) {

    int soma = 0;

    for(int i = n - 1; i > 0; i--){
        if(n % i == 0){
            soma += i;
        }
    }

    return soma;
}
