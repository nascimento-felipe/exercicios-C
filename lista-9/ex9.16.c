/*
    Arquivo: ex9.16.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removerLetra(char *str, char c);

int main() {

    char frase[41];
    char caractere;

    // entrada da frase
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // entrada do caractere
    printf("Caractere: ");
    scanf(" %c", &caractere);

    // invocação da função
    removerLetra(frase, caractere);

    // saída da frase
    printf("\n\n%s", frase);

    return 0;
}

void removerLetra(char *str, char c) {

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == tolower(c) || str[i] == toupper(c)) {
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            }
        }
    }

}
