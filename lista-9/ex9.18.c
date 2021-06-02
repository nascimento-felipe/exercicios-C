/*
    Arquivo: ex9.18.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool ehPalindromo(const char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // saída da frase
    printf("\"%s\" ", frase);

    if(ehPalindromo(frase)){
        printf("eh um palindromo!");
    } else {
        printf("nao eh um palindromo!");
    }

    return 0;
}

bool ehPalindromo(const char *str) {

    int tamStrSemBarra = strlen(str) - 1;

    for(int i = 0; i < tamStrSemBarra; i++){
        if(str[i] != str[tamStrSemBarra - i]){
            return false;
        }
    }

    return true;

}

