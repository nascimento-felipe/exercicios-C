#include <stdio.h>
#include <stdlib.h>

int main() {
    int primeiroNumero;
    int segundoNumero;

    printf("Entre com um numero: ");
    scanf("%d", &primeiroNumero);

    printf("Entre com outro numero: ");
    scanf("%d", &segundoNumero);

    if(primeiroNumero >= segundoNumero) {
        printf("Ordem decrescente: %d >= %d", primeiroNumero, segundoNumero);
    } else {
        printf("Ordem decrescente: %d >= %d", segundoNumero, primeiroNumero);
    }


    return 0;
}
