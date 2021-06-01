/*
    Arquivo: ex9.12.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarOcorrencias(const char *str, char c);

int main() {

    char frase[41];

    // entrada do array
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("\n\nA/a: %d\n", contarOcorrencias(frase, 'a'));
    printf("B/b: %d\n", contarOcorrencias(frase, 'b'));
    printf("C/c: %d\n", contarOcorrencias(frase, 'c'));
    printf("D/d: %d\n", contarOcorrencias(frase, 'd'));
    printf("E/e: %d\n", contarOcorrencias(frase, 'e'));


    return 0;
}

int contarOcorrencias(const char *str, char c) {

    int ocorrencias = 0;

    for(int j = 0; j < strlen(str); j++){
        if(str[j] == c || str[j] == toupper(c)){
            ocorrencias++;
        }
    }

    return ocorrencias;
}

