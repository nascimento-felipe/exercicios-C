/*
    Arquivo: ex10.13.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir);
void mover(Retangulo *r, int x, int y);
void imprimirRetangulo(const Retangulo *r);

int main() {

    Ponto p1;
    Ponto p2;
    Retangulo retEntrada;
    Ponto pMover;


    // entrada dos pontos
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p1.x);
    printf("    y: ");
    scanf("%d", &p1.y);

    printf("Ponto inferior direito\n");
    printf("    x: ");
    scanf("%d", &p2.x);
    printf("    y: ");
    scanf("%d", &p2.y);

    // entrada do valor para mover
    printf("Mover em x: ");
    scanf("%d", &pMover.x);
    printf("Mover em y: ");
    scanf("%d", &pMover.y);

    retEntrada = novoRetangulo(&p1, &p2);

    // saída
    printf("Retangulo original:");
    imprimirRetangulo(&retEntrada);

    mover(&retEntrada, pMover.x, pMover.y);

    printf("Retangulo movido:");
    imprimirRetangulo(&retEntrada);

    return 0;
}

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir) {

    Retangulo rect;

    rect.superiorEsquerdo.x = sEsq->x;
    rect.superiorEsquerdo.y = sEsq->y;

    rect.inferiorDireito.x = iDir->x;
    rect.inferiorDireito.y = iDir->y;

    return rect;

}

void mover(Retangulo *r, int x, int y) {

    r->superiorEsquerdo.x += x;
    r->inferiorDireito.x += x;

    r->superiorEsquerdo.y += y;
    r->inferiorDireito.y += y;

}

void imprimirRetangulo(const Retangulo *r) {

    printf("\n(%+02d, %+02d) =====|\n"
           "|               |\n"
           "|               |\n"
           "|===== (%+02d, %+02d)\n",
           r->superiorEsquerdo.x,
           r->superiorEsquerdo.y,
           r->inferiorDireito.x,
           r->inferiorDireito.y
    );

}
