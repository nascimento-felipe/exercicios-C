/*
    Arquivo: ex9.8.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 3

int main() {

    char nomes[M][41];
    char troca[41];

    // entrada dos nomes
    for(int i = 0; i < M; i++){
        printf("String %d: ", i );
        fgets(nomes[i], 41, stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';
    }

    // saída
    if(strcmp(nomes[0], nomes[1]) >= 0 && strcmp(nomes[0], nomes[2]) >= 0 && strcmp(nomes[1], nomes[2]) >= 0){
        printf("%s, %s e %s", nomes[2], nomes[1], nomes[0]);

    } else if(strcmp(nomes[0], nomes[1]) >= 0 && strcmp(nomes[0], nomes[2]) >= 0 && strcmp(nomes[2], nomes[1]) >= 0){
        printf("%s, %s e %s", nomes[1], nomes[2], nomes[0]);
    }

    else if(strcmp(nomes[1], nomes[0]) >= 0 && strcmp(nomes[1], nomes[2]) >= 0 && strcmp(nomes[2], nomes[0]) >= 0) {
            printf("%s, %s e %s", nomes[0], nomes[2], nomes[1]);
    } else if(strcmp(nomes[1], nomes[0]) >= 0 && strcmp(nomes[1], nomes[2]) >= 0 && strcmp(nomes[0], nomes[2]) >= 0) {
            printf("%s, %s e %s", nomes[2], nomes[0], nomes[1]);
    }

    else if(strcmp(nomes[2], nomes[0]) >= 0 && strcmp(nomes[2], nomes[1]) >= 0 && strcmp(nomes[1], nomes[0]) >= 0) {
            printf("%s, %s e %s", nomes[0], nomes[1], nomes[2]);
    } else if(strcmp(nomes[2], nomes[0]) >= 0 && strcmp(nomes[2], nomes[1]) >= 0 && strcmp(nomes[0], nomes[1]) >= 0){
        printf("%s, %s e %s", nomes[1], nomes[0], nomes[2]);
    }

    return 0;
}
