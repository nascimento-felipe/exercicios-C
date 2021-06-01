/*
    Arquivo: ex9.11.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c);

int main() {

    int h = 0;
    char caractere;
    char frase[41];

    // entrada do caractere
    printf("Caractere: ");
    scanf(" %c", &caractere);

    printf("\n\n");

    // entrada da frase
    do{

        printf("Frase: ");
        fgets(frase, 41, stdin);
        frase[strlen(frase) - 1] = '\0';

        if(strcmp(frase, "fim") != 0){
            printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'\n", frase, contarOcorrencias(frase, caractere), caractere);
        }

    }while(strcmp(frase, "fim") != 0);

    return 0;
}

int contarOcorrencias(const char *str, char c) {

    int ocorrencias = 0;

    for(int j = 0; j < strlen(str); j++){
        if(str[j] == c){
            ocorrencias++;
        }
    }

    return ocorrencias;
}

