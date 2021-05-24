/*
    Arquivo: ex8.1.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

void somatorioMedia( float a[], int n, float *somatorio, float *media );

int main() {

    int n = 10;
    float array[10];
    float somatorio;
    float media;

    // entrada do array
    for(int i = 0; i < n; i++) {
        printf("n[%d]: ", i);
        scanf("%f", &array[i]);
    }

    somatorioMedia( array, n, &somatorio, &media );

    // saída
    printf("\n\nSomatorio: %.2f\n", somatorio);
    printf("Media: %.2f", media);

    return 0;
}

void somatorioMedia( float a[], int n, float *somatorio, float *media ) {

    for(int i = 0; i < n; i++) {
        *somatorio += a[i];
    }

    *media = *somatorio / n;
}
