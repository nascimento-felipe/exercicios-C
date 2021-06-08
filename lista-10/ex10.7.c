/*
    Arquivo: ex10.7.c
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
int getVermelho(const Cor *c);
int getVerde(const Cor *c);
int getAzul(const Cor *c);
void imprimirCor(const Cor *c);

int main() {

    Cor corEntrada;
    int vermelho;
    int verde;
    int azul;

    // entrada das cores
    printf("Vermelho: ");
    scanf("%d", &vermelho);
    printf("Verde: ");
    scanf("%d", &verde);
    printf("Azul: ");
    scanf("%d", &azul);

    corEntrada = novaCor(vermelho, verde, azul);

    // saída
    printf("\n\nCor: ");
    imprimirCor(&corEntrada);

    printf("\ngetVermelho(): %d\n"
           "getVerde(): %d\n"
           "getAzul(): %d",
           getVermelho(&corEntrada),
           getVerde(&corEntrada),
           getAzul(&corEntrada)
    );

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

int getVermelho(const Cor *c) {

    return c->vermelho;
}

int getVerde(const Cor *c) {

    return c->verde;
}

int getAzul(const Cor *c) {

    return c->azul;
}

void imprimirCor(const Cor *c) {

    printf("rgb( %d, %d, %d )", c->vermelho, c->verde, c->azul);

}
