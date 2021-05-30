/*
    Arquivo: ex9.7.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavras[5][2][41];

    // entrada das palavras
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            printf("Par %d, palavra %d: ", i + 1, j + 1);
            fgets(palavras[i][j], 41, stdin);
            palavras[i][j][strlen(palavras[i][j]) - 1] = '\0';
        }
    }

    // saída
    printf("\n\n");
    for(int i = 0; i < 5; i++){
        printf("%s - %s: ", palavras[i][0], palavras[i][1]);

        if((palavras[i][0][0]) == (palavras[i][1][0])) {
            printf("IGUAIS\n");

        } else if((palavras[i][0][0]) > (palavras[i][1][0])){
            printf("ORDEM DECRESCENTE\n");

        } else {
            printf("ORDEM CRESCENTE\n");
        }
    }

    return 0;
}
