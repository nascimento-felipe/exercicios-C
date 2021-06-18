/*
    Arquivo: ex9.19.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void substring(char *recorte, const char *origem, int inicio, int fim);

int main() {

    char frase[41];
    char recorteFrase[41];
    int inicio;
    int fim;

    // entrada da frase
    printf("String: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    // entrada da vari�vel de in�cio e de fim
    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);

    // sa�da do printf e depois a verifica��o do intervalo
    // do in�cio e fim
    printf("\n\nRecorte: ");
    if(inicio > fim || strlen(frase) < fim || strlen(frase) < inicio){
        printf("%s", frase);
    } else {
        // invoca��o da fun��o de corte
        substring(recorteFrase, frase, inicio, fim);
        printf("%s", recorteFrase);
    }

    return 0;
}

void substring(char *recorte, const char *origem, int inicio, int fim) {

    int j = 0;
    for(int i = inicio; i < fim; i++) {
        recorte[j] = origem[i];
        j++;
    }

    recorte[strlen(recorte)] = '\0';

}
