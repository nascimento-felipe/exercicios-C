/*
    Arquivo: ex9.15.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMinuscula(char *str);

int main() {

    char frase[41];

    // entrada do array
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // invocação da função
    tornarMinuscula(frase);

    // saída
    printf("\n\n%s", frase);

    return 0;
}

void tornarMinuscula(char *str) {

    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }

}
