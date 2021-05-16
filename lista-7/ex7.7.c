/*
    Arquivo: ex7.7.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo( int );

int main() {

    for(int i = 1; i <= 20; i++){
        printf("%d: ", i);

        if(ehPrimo(i)){
            printf("eh primo\n");
        } else {
            printf("nao eh primo\n");
        }
    }

    return 0;
}

bool ehPrimo( int n ) {

    for(int i = 1; i <= n; i++){
        if(n == 1){
            return false;
        } else if(n % i == 0 && i != 1 && i != n){
            return false;
        } else if(n == i){
            return true;
        }
    }
}
