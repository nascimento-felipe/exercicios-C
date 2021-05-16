/*
    Arquivo: 7.9.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define M 5

int lePositivo();

bool ehTriangulo( int, int, int );

int tipoTriangulo( int, int, int );

int main() {

    int ladoA[M];
    int ladoB[M];
    int ladoC[M];

    // entrada
    for(int i = 0; i < M; i++){
        printf("ladoA[%d]: ", i);
        ladoA[i] = lePositivo();

        printf("ladoB[%d]: ", i);
        ladoB[i] = lePositivo();

        printf("ladoC[%d]: ", i);
        ladoC[i] = lePositivo();
    }

    // saida
    for(int i = 0; i < M; i++){
        printf("Valores %d, %d e %d: ", ladoA[i], ladoB[i], ladoC[i]);

        switch(tipoTriangulo(ladoA[i], ladoB[i], ladoC[i])){
            case 0:
                printf("nao formam um triangulo\n");
                break;
            case 1:
                printf("triangulo equilatero\n");
                break;
            case 2:
                printf("triangulo isosceles\n");
                break;
            case 3:
                printf("triangulo escaleno\n");
                break;
            default:
                printf("nao formam um triangulo\n");
        }
    }

    return 0;
}

int lePositivo() {

    int n;

    scanf("%d", &n);

    while(n < 0){
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
    }

    return n;
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC) {

    if(abs(ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB) && abs(ladoA - ladoC) < ladoB && ladoB < (ladoA + ladoC) && abs(ladoB - ladoC) < ladoA && ladoA < (ladoB + ladoC) ){
        return true;
    } else {
        return false;
    }

}

int tipoTriangulo(int ladoA, int ladoB, int ladoC) {

    if(!ehTriangulo(ladoA, ladoB, ladoC)){
        return 0;
    } else if(ladoA == ladoB && ladoB == ladoC){
        return 1;
    } else if(ladoA == ladoB || ladoB == ladoC || ladoC == ladoA){
        return 2;
    } else {
        return 3;
    }

}
