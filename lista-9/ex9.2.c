/*
    Arquivo: ex9.2.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char sentenca[41];

    // entrada da sentença
    printf("Sentenca: ");
    fgets( sentenca, 41, stdin );
    sentenca[strlen(sentenca) - 1] = '\0';

    // saída
    printf("\n\nPrimeiro caractere: %c\n", sentenca[0]);
    printf("Ultimo caractere: %c\n", sentenca[strlen(sentenca) - 1]);
    printf("Numero de caracteres: %d", strlen(sentenca));

    return 0;
}
