/*
    Arquivo: ex.8.5.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

int buscar( const int *a, int n, int chave );

int main() {

    int array[10];
    int quantidade = 10;
    int valorPraProcurar;
    int posicaoEncontrada;

    // entrada do array
    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }


    // entrada do numero pra buscar
    printf("Buscar por: ");
    scanf("%d", &valorPraProcurar);

    // invocação da função
    posicaoEncontrada = buscar( array, quantidade, valorPraProcurar );

    // verificação dos resutados e saída
    switch( posicaoEncontrada ) {
        case -1:
            printf("\n\nO valor %d nao foi encontrado.", valorPraProcurar);
        break;
        
        default:
            printf("\n\nO valor %d foi encontrado na posicao %d.", valorPraProcurar, posicaoEncontrada);
        break;
    }

    return 0;
}

int buscar( const int *a, int n, int chave ) {

    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            return i;
        }
    }

    return -1;
}