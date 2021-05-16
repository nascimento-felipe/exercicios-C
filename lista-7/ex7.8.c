/*
    Arquivo: ex7.8.c
    Autor: Felipe de Andrade Nascimento
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 5

int lePositivo();

int somaDivisores( int );

bool saoAmigos( int, int );

int main() {

    int n1[M];
    int n2[M];

    // entrada dos arrays
    for(int i = 0; i < M; i++){
        printf("n1[%d]: ", i);
        n1[i] = lePositivo();

        printf("n2[%d]: ", i);
        n2[i] = lePositivo();
    }

    // saida
    for(int i = 0; i < M; i++){
        printf("%d e %d ", n1[i], n2[i]);

        if(saoAmigos(n1[i], n2[i])){
            printf("sao amigos\n");
        } else {
            printf("nao sao amigos\n");
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

int somaDivisores( int n ) {

    int soma = 0;

    for(int i = n - 1; i > 0; i--){
        if(n % i == 0){
            soma += i;
        }
    }

    return soma;
}

bool saoAmigos( int n1, int n2) {

    if(somaDivisores(n1) == n2 && somaDivisores(n2) == n1){
        return true;
    } else {
        return false;
    }

}
