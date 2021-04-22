#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroNumero;
    int segundoNumero;
    int numerosPares;

    printf("N1: ");
    scanf("%d", &primeiroNumero);

    printf("N2: ");
    scanf("%d", &segundoNumero);

    if(primeiroNumero >= segundoNumero){
        printf("Numeros pares entre %d e %d: ", segundoNumero, primeiroNumero);
        for(int i = segundoNumero; i <= primeiroNumero; i++){
            if(i % 2 == 0){
                numerosPares++;
            }
        }

    } else {
        printf("Numeros pares entre %d e %d: ", primeiroNumero, segundoNumero);
        for(int i = primeiroNumero; i <= segundoNumero; i++){
            if(i % 2 == 0){
                numerosPares++;
            }
        }
    }

    printf("%d", numerosPares);


    return 0;
}
