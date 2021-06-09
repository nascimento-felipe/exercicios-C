/*
    Arquivo: ex10.11.c
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
int calcularArea(const Retangulo *r);
void imprimirRetangulo(const Retangulo *r);

int main() {

    Ponto p1;
    Ponto p2;
    Retangulo retEntrada;

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

    // saída
    imprimirRetangulo(&retEntrada);
    printf("\nArea: %d", calcularArea(&retEntrada));

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

int calcularArea(const Retangulo *r) {

    int ladoX = r->inferiorDireito.x - r->superiorEsquerdo.x;
    int ladoY = r->superiorEsquerdo.y - r->inferiorDireito.y;

    return ladoX * ladoY;

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
