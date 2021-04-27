#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int pares[5] = { -1, -1, -1, -1, -1 };
    int impares[5] = { 0 };
    int quantidadePares = 0;
    int quantidadeImpares = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]", i);
        scanf("%d", &array[i]);

        if(array[i] % 2 == 0){
            pares[i] = array[i];
            quantidadePares++;
        } else {
            impares[i] = array[i];
            quantidadeImpares++;
        }
    }

    printf("Numeros pares:");

    if(quantidadePares > 0){
        for(int i = 0; i < 5; i++){
            if(pares[i] != -1){
                printf(" %d", pares[i]);
            }
        }
    } else {
        printf(" nao ha");
    }

    printf(".\n");

    printf("Numeros impares:");

    if(quantidadeImpares > 0){
        for(int i = 0; i < 5; i++){
            if(impares[i] != 0){
                printf(" %d", impares[i]);
            }
        }
    } else {
        printf(" nao ha");
    }

    printf(".");
    
    return 0;
}