/*
    Arquivo: ex10.8.c
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
void setVermelho(Cor *c, int vermelho);
void setVerde(Cor *c, int verde);
void setAzul(Cor *c, int azul);
void imprimirCor(const Cor *c);

int main() {

    Cor corOriginal;
    int vermelho;
    int verde;
    int azul;
    int novoVermelho;
    int novoVerde;
    int novoAzul;

    // entrada das cores
    printf("Vermelho: ");
    scanf("%d", &vermelho);
    printf("Verde: ");
    scanf("%d", &verde);
    printf("Azul: ");
    scanf("%d", &azul);

    corOriginal = novaCor(vermelho, verde, azul);

    // entrada das novas cores
    printf("Novo vermelho: ");
    scanf("%d", &novoVermelho);
    printf("Novo verde: ");
    scanf("%d", &novoVerde);
    printf("Novo azul: ");
    scanf("%d", &novoAzul);

    // saída
    printf("\nCor: ");
    imprimirCor(&corOriginal);

    setVermelho(&corOriginal, novoVermelho);
    setVerde(&corOriginal, novoVerde);
    setAzul(&corOriginal, novoAzul);

    printf("\nCor alterada: ");
    imprimirCor(&corOriginal);

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

void setVermelho(Cor *c, int vermelho) {

    if(vermelho > 255){
        c->vermelho = 255;
    } else if(vermelho < 0){
        c->vermelho = 0;
    } else {
        c->vermelho = vermelho;
    }

}

void setVerde(Cor *c, int verde) {

    if(verde > 255){
        c->verde = 255;
    } else if(verde < 0){
        c->verde = 0;
    } else {
        c->verde = verde;
    }

}

void setAzul(Cor *c, int azul) {

    if(azul > 255){
        c->azul = 255;
    } else if(azul < 0){
        c->azul = 0;
    } else {
        c->azul = azul;
    }
}

void imprimirCor(const Cor *c) {

    printf("rgb( %d, %d, %d )", c->vermelho, c->verde, c->azul);

}
