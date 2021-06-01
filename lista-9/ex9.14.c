/*
    Arquivo: ex9.14.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMaiuscula(char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // invocação da função
    tornarMaiuscula(frase);

    printf("\n\n%s", frase);


    return 0;
}

void tornarMaiuscula(char *str) {

    for(int i = 0; i < strlen(str); i++){
        str[i] = toupper(str[i]);
    }

}
