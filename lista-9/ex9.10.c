/*
    Arquivo: ex9.10.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

int tamanho(const char *str);

int main() {

    char frase[41];

    // entrada da frase
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[tamanho(frase) - 1] = '\0';

    // saída
    printf("%d caractere(s)!", tamanho(frase));

    return 0;
}

int tamanho(const char *str) {

    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i;
}
