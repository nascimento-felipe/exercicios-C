#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroDigitado;
    int antecessor;
    int sucessor;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &numeroDigitado);

    sucessor = numeroDigitado + 1;
    antecessor = numeroDigitado - 1;

    printf("Sucessor de %d: %d\n", numeroDigitado, sucessor );
    printf("Antecessor de %d: %d", numeroDigitado, antecessor);

    return 0;
}
