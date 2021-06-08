/*
    Arquivo: ex10.10.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor(int vermelho, int verde, int azul);
Cor clarear(const Cor *c);
void imprimirCor(const Cor *c);


int main() {

    int vermelho;
    int verde;
    int azul;
    Cor corBase;
    Cor corClareada;

    printf("Vermelho: ");
    scanf("%d", &vermelho);
    printf("Verde: ");
    scanf("%d", &verde);
    printf("Azul: ");
    scanf("%d", &azul);

    corBase = novaCor(vermelho, verde, azul);
    corClareada = clarear(&corBase);

    // saída
    printf("\nCor base: ");
    imprimirCor(&corBase);

    printf("\nCor clareada: ");
    imprimirCor(&corClareada);

    return 0;
}

Cor novaCor(int vermelho, int verde, int azul) {

    Cor cor;

    if(vermelho > 255){
        cor.vermelho = 255;
    } else if(vermelho < 0) {
       cor.vermelho = 0;
    } else {
        cor.vermelho = vermelho;
    }

    if(verde > 255){
        cor.verde = 255;
    } else if(verde < 0) {
        cor.verde = 0;
    } else {
        cor.verde = verde;
    }

    if(azul > 255){
        cor.azul = 255;
    } else if(azul < 0){
        cor.azul = 0;
    } else {
        cor.azul = azul;
    }

    return cor;

}

Cor clarear(const Cor *c) {

    Cor clareada;

    if(c->vermelho <= 0){
        clareada.vermelho = 3;
    } else if(c->vermelho > 0 && c->vermelho < 3){
        clareada.vermelho = 3 / .7;
    } else {
        clareada.vermelho = c->vermelho / .7;

        if(clareada.vermelho > 255){
            clareada.vermelho = 255;
        }
    }

    if(c->verde <= 0){
        clareada.verde = 3;
    } else if(c->verde > 0 && c->verde < 3){
        clareada.verde = 3 / .7;
    } else {
        clareada.verde = c->verde / .7;

        if(clareada.verde > 255){
            clareada.verde = 255;
        }
    }

    if(c->azul <= 0){
        clareada.azul = 3;
    } else if(c->azul > 0 && c->azul < 3){
        clareada.azul = 3 / .7;
    } else {
        clareada.azul = c->azul / .7;

        if(clareada.azul > 255){
            clareada.azul = 255;
        }
    }

    return clareada;

}

void imprimirCor(const Cor *c) {

    printf("rgb( %d, %d, %d )", c->vermelho, c->verde, c->azul);

}
