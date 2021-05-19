/*
    Arquivo: ex7.14.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

#define M 3

void classificaTrinca( int, int, int );

int main() {

    int n1[M];
    int n2[M];
    int n3[M];

    // entrada
    for(int i = 0; i < M; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);

        printf("n3[%d]: ", i);
        scanf("%d", &n3[i]);
    }

    // saida
    for(int i = 0; i < M; i++){
        classificaTrinca(n1[i], n2[i], n3[i]);
    }

    return 0;
}

void classificaTrinca(int n1, int n2, int n3) {

    int t;
    
    printf("%d, %d e %d: ", n1, n2, n3);

    if(n1 > n2){
        t = n1;
        n1 = n2;
        n2 = t;
    }
    if(n2 > n3){
        t = n2;
        n2 = n3;
        n3 = t;
    }
    if(n1 > n2){
        t = n1;
        n1 = n2;
        n2 = t;
    }

    printf("%d <= %d <= %d\n", n1, n2, n3);

}