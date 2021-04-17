#include <stdio.h>
#include <stdlib.h>

int main() {
    int primeiroValor;
    int segundoValor;

    printf("N1: ");
    scanf("%d", &primeiroValor);

    printf("N2: ");
    scanf("%d", &segundoValor);

    if(primeiroValor <= segundoValor){
        for(int i = primeiroValor; i <= segundoValor; i++){
            printf(" %d", i);
        }
    } else {
        printf("Teste");
        for(int i = primeiroValor; i >= segundoValor; i--){
            printf(" %d", i);
        }
    }

    return 0;
}
