/*
    Arquivo: ex7.12.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

#define M 3

void classificaDupla( int, int );

int main() {

    int n1[M] = { 0 };
    int n2[M] = { 0 };

    // entrada dos arrays
    for(int i = 0; i < M; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    // saída
    for(int i = 0; i < M; i++){
        classificaDupla(n1[i], n2[i]);
    }

    return 0;
}

void classificaDupla(int n1, int n2) {

    printf("%d e %d: ", n1, n2);

    if(n2 < n1){
        printf("%d <= %d\n", n2, n1);
    } else {
        printf("%d <= %d\n", n1, n2);
    }
}