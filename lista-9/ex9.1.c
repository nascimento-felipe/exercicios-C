/*
    Arquivo: ex9.1.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[41];

    printf("String: ");
    fgets( frase, 41, stdin );
    frase[strlen(frase)-1] = '\0';

    printf("\n\n%c, %c, %c, %c.", frase[0], frase[1], frase[2], frase[3]);

    return 0;
}
