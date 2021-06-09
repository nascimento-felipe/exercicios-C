/*
    Arquivo: ex10.12.c
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
Ponto obterCentro(const Retangulo *r);
void imprimirRetangulo(const Retangulo *r);

int main() {

    Ponto p1;
    Ponto p2;
    Retangulo retEntrada;
    Ponto pCentro;

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

    retEntrada = novoRetangulo(&p1, &p2);
    pCentro = obterCentro(&retEntrada);

    // saída
    imprimirRetangulo(&retEntrada);
    printf("\nCentro: (%+02d, %+02d)", pCentro.x, pCentro.y);

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

Ponto obterCentro(const Retangulo *r) {

    Ponto centro;

    centro.x = (r->superiorEsquerdo.x + r->inferiorDireito.x) / 2;
    centro.y = (r->superiorEsquerdo.y + r->inferiorDireito.y) / 2;

    return centro;
}

void imprimirRetangulo(const Retangulo *r) {

    printf("\n(%+02d, %+02d) =====|\n"
           "|               |\n"
           "|               |\n"
           "|===== (%+02d, %+02d)",
           r->superiorEsquerdo.x,
           r->superiorEsquerdo.y,
           r->inferiorDireito.x,
           r->inferiorDireito.y
    );

}
