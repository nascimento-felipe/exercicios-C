/*
    Arquivo: ex9.5.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[41];

    // entrada do array
    printf("Nome: ");
    fgets( nome, 41, stdin );
    nome[strlen(nome) - 1] = '\0';

    // saída do array
    for(int i = 0; i < 5; i++){
        printf("%s\n", nome);
    }

    return 0;
}
