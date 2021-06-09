/*
    Arquivo: ex10.14.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir);
bool contem(const Retangulo *r, const Ponto *p);

int main() {

    Ponto p1;
    Ponto p2;
    Ponto pContido[5];
    Retangulo retEntrada;

    // entrada do retangulo
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

    // entrada dos pontos
    printf("Pontos");
    for(int i = 0; i < 5; i++){
        printf("  Ponto %d", i + 1);
        printf("    x: ");
        scanf("%d", &pContido[i].x);
        printf("    y: ");
        scanf("%d", &pContido[i].y);
    }

    // saída
    for(int i = 0; i < 5; i++){
        printf("\n(%+02d, %+02d): ", pContido[i].x, pContido[i].y);

        if(contem(&retEntrada, &pContido[i])){
            printf("contido!");
        } else {
            printf("nao contido!");
        }
    }

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

bool contem(const Retangulo *r, const Ponto *p) {

    if(p->x >= r->superiorEsquerdo.x && p->x <= r->inferiorDireito.x ){
        if(p->y >= r->inferiorDireito.y && p->y <= r->superiorEsquerdo.y){
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
