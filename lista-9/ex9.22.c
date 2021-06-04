/*
    Arquivo: ex9.22.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirDireita(const char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("String: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // invocação da função e saída
    printf("\n\n");
    imprimirDireita(frase);

    return 0;
}

void imprimirDireita(const char *str) {

    for(int i = 0; i < 80 - strlen(str); i++){
        printf(" ");
    }

    printf("%s", str);

}
