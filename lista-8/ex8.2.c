/*
    Arquivo: ex8.2.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

void trocar( int *, int * );

int main() {

    int n1;
    int n2;

    // entrada do n1
    printf("n1: ");
    scanf("%d", &n1);

    // entrada do n2
    printf("n2: ");
    scanf("%d", &n2);

    //saída
    printf("\n\nAntes:\n");
    printf("    n1: %d\n", n1);
    printf("    n2: %d\n", n2);

    trocar( &n1, &n2 );

    printf("Depois:\n");
    printf("    n1: %d\n", n1);
    printf("    n2: %d", n2);

    return 0;
}

void trocar( int *n1, int *n2 ) {

    int t;

    t = *n2;
    *n2 = *n1;
    *n1 = t;

}