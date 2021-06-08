/*
    Arquivo: ex10.9.c
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
Cor escurecer(const Cor *c);
void imprimirCor(const Cor *c);

int main() {

    int vermelho;
    int verde;
    int azul;
    Cor corBase;
    Cor corEscurecida;

    // entrada das cores
    printf("Vermelho: ");
    scanf("%d", &vermelho);
    printf("Verde: ");
    scanf("%d", &verde);
    printf("Azul: ");
    scanf("%d", &azul);

    corBase = novaCor(vermelho, verde, azul);

    corEscurecida = escurecer(&corBase);

    // saída
    printf("\nCor base: ");
    imprimirCor(&corBase);

    printf("\nCor escurecida: ");
    imprimirCor(&corEscurecida);

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

Cor escurecer(const Cor *c) {

    Cor corEscura;

    corEscura.vermelho = c->vermelho * 0.7;
    corEscura.verde = c->verde * 0.7;
    corEscura.azul = c->azul * 0.7;

    return corEscura;

}

void imprimirCor(const Cor *c) {

    printf("rgb( %d, %d, %d )", c->vermelho, c->verde, c->azul);

}
