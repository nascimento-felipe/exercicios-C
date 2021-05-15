/*
    Arquivo: ex7.4.c
    Autor: Felipe de Andrade Nascimento
*/


#include <stdio.h>
#include <stdlib.h>

int lePositivo();

int somatorio( int );


int main() {

    int array[5];

    // entrada dos valores do array
    for(int i = 0; i < 5; i++){
        printf("n[%d]: ", i);
        array[i] = lePositivo();
    }

    // saída
    for(int i = 0; i < 5; i++){
        printf("Somatorio de %d a %d: %d\n", 1, array[i], somatorio(array[i]));
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

int somatorio( int n ) {

    int somatorio = 0;

    for(int i = 1; i <= n; i++){
        somatorio += i;
    }

    return somatorio;
}
