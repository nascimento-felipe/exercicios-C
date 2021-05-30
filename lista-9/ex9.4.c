/*
    Arquivo: ex9.4.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[41];

    // entrada do array
    printf("Sentenca: ");
    fgets( frase, 41, stdin );
    frase[strlen(frase) - 1] = '\0';

    // saída
    for(int i = 0; i < strlen(frase); i++){
        if(i % 2 != 0 && i != 1){
            if(frase[i] == ' '){
                printf(", '%c'", frase[i]);
            } else {
                printf(", %c", frase[i]);
            }

        } else if(i == 1){
            if(frase[i] == ' '){
                printf("'%c'", frase[i]);
            } else {
                printf("%c", frase[i]);
            }
        }
    }

    return 0;
}
