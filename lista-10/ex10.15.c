/*
    Arquivo: ex10.15.c
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
bool intercepta(const Retangulo *r1, const Retangulo *r2);

int main() {

    Retangulo primeiroRect;
    Retangulo segundoRect;
    Ponto supEsq;
    Ponto infDir;

    // entrada dos pontos do retangulo 1
    //optei por não fazer com for() pq desse
    // jeiot foi mais rápido
    printf("Retangulo 1\n");
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &supEsq.x);
    printf("    y: ");
    scanf("%d", &supEsq.y);
    printf("Ponto inferior direito\n");
    printf("    x: ");
    scanf("%d", &infDir.x);
    printf("    y: ");
    scanf("%d", &infDir.y);

    primeiroRect = novoRetangulo(&supEsq, &infDir);

    // entrada dos pontos do retangulo 2
    printf("Retangulo 2\n");
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &supEsq.x);
    printf("    y: ");
    scanf("%d", &supEsq.y);
    printf("Ponto inferior direito\n");
    printf("    x: ");
    scanf("%d", &infDir.x);
    printf("    y: ");
    scanf("%d", &infDir.y);

    segundoRect = novoRetangulo(&supEsq, &infDir);

    // saída
    printf("Os retangulos ");
    if(intercepta(&primeiroRect, &segundoRect)){
        printf("se interceptam!");
    } else {
        printf("nao se interceptam!");
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

bool intercepta(const Retangulo *r1, const Retangulo *r2) {

    if(r2->superiorEsquerdo.x <= r1->inferiorDireito.x && r2->inferiorDireito.x >= r1->superiorEsquerdo.x){
        if(r2->inferiorDireito.y <= r1->superiorEsquerdo.y && r2->superiorEsquerdo.y >= r1->inferiorDireito.y){
            return true;
        }
        return false;
    }

    return false;
}
