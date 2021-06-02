/*
    Arquivo: ex9.17.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarPalavras(const char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // saída da frase
    printf("Quantidade de palavras: %d", contarPalavras(frase));

    return 0;
}

int contarPalavras(const char *str) {

    int quantidadePalavras = 1;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            quantidadePalavras++;
        }
    }

    return quantidadePalavras;

}
