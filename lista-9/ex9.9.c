/*
    Arquivo: ex9.9.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter( char *destino, const char *origem );

int main() {

    char arrayOrigem[41];
    char arrayDestino[41];

    // entrada do array
    printf("String: ");
    fgets(arrayOrigem, 41, stdin);
    arrayOrigem[strlen(arrayOrigem) - 1] = '\0';

    //invocação da função
    inverter(arrayDestino, arrayOrigem);

    // saída do array invertido
    printf("\n\nInvertida: %s", arrayDestino);

    return 0;
}

void inverter(char *destino, const char *origem) {

    int totalCaracteresOrigem = strlen(origem);
    int j = 0;

    for(int i = (totalCaracteresOrigem - 1); i >= 0; i--) {
        destino[j] = origem[i];
        j++;
    }

}
