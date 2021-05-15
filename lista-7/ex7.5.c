/*
    Arquivos: ex7.5.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 5

bool ehPar( int );

bool ehDivisivel( int, int );

int main() {

    int n1[5];
    int n2[5];

    // entrada dos arrays
    for(int i = 0; i < M; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    // saida
    for(int i = 0; i < M; i++){

        printf("%d ", n1[i]);

        if(ehPar(n1[i])){
            printf("eh par e %d ", n1[i]);
        } else {
            printf("eh impar e %d ", n1[i]);
        }

        if(ehDivisivel(n1[i], n2[i])){
            printf("eh divisivel por %d\n", n2[i]);
        } else {
            printf("nao eh divisivel por %d\n", n2[i]);
        }
    }


    return 0;
}

bool ehPar( int n ) {

    if(n % 2 == 0){
        return true;
    } else {
        return false;
    }

}

bool ehDivisivel( int dividendo, int divisor ) {

    if(dividendo % divisor == 0){
        return true;
    } else {
        return false;
    }

}
