/*
    Arquivo: ex7.14.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 5

void imprimeDuplaClassificada( int, int, bool );

int main() {

    int n1[M];
    int n2[M];
    bool emOrdemCrescente = true;

    // entrada dos 3 arrays
    for(int i = 0; i < M; i++) {
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    // saida
    for(int i = 0; i < M; i++) {
        imprimeDuplaClassificada(n1[i], n2[i], emOrdemCrescente);
        emOrdemCrescente = !emOrdemCrescente;
    }

    return 0;
}

void imprimeDuplaClassificada( int n1, int n2, bool emOrdemCrescente ) {
    
    printf("%d e %d: ", n1, n2);

    if(emOrdemCrescente) {
        if(n1 < n2) {
            printf("%d <= %d\n", n1, n2);
        } else {
            printf("%d <= %d\n", n2, n1);
        }
    } else {
        if(n1 > n2) {
            printf("%d >= %d\n", n1, n2);
        } else {
            printf("%d >= %d\n", n2, n1);
        }
    }

}