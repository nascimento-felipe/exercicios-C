/*
    Arquivo: ex9.23.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa(const char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("String: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // invocação da função e saída
    imprimirCaixa(frase);



    return 0;
}

void imprimirCaixa(const char *str) {

    int tamanhoStr = strlen(str);

    printf("\n\n");

    printf("++");
    for(int i = -1; i < tamanhoStr + 1; i++){
        printf("=");
    }
    printf("++\n");

    printf("|| %s ||\n", str);

    printf("++");
    for(int i = -1; i < tamanhoStr + 1; i++){
        printf("=");
    }
    printf("++\n");

}
