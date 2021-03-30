#include <stdio.h>
#include <stdlib.h>

int main() {
    int primeiroNumero;
    int segundoNumero;
    int media;

    printf("Primeiro numero: ");
    scanf("%d", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

    media = (primeiroNumero + segundoNumero) / 2;

    printf("Media aritmetica: %d", media);

    return 0;
}
