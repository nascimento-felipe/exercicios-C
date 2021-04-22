#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroNumero;
    int segundoNumero;
    int somatorio = 0;

    printf("N1: ");
    scanf("%d", &primeiroNumero);

    printf("N2: ");
    scanf("%d", &segundoNumero);

    if(primeiroNumero >= segundoNumero){
        printf("Somatorio entre %d e %d: ", segundoNumero, primeiroNumero);

        for(int i = segundoNumero; i <= primeiroNumero; i++){
            somatorio += i;
        }
    } else {
        printf("Somatorio entre %d e %d: ", primeiroNumero, segundoNumero);

        for(int i = primeiroNumero; i <= segundoNumero; i++){
            somatorio += i;
        }
    }

    printf("%d", somatorio);

    return 0;
}
