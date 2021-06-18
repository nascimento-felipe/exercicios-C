/*
    Arquivo: ex11.1.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum {
    RETANGULO,
    CIRCULO
} TipoForma;

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    TipoForma tipo;
    Ponto centro;
    union {
        struct {
            int altura;
            int largura;
        } retangulo;
        struct {
            int raio;
        } circulo;
    } geom;
} Forma;

int calcularArea(const Forma *f);
void mover(Forma *f, int x, int y);
Forma redimensionar(const Forma *f, float fator);
void imprimirForma(const Forma *f);

int main() {

    Forma rect;
    Forma circ;
    Ponto pMover;
    float fator;

    rect.tipo = RETANGULO;
    circ.tipo = CIRCULO;

    // entrada dos dados do retângulo
    printf("Dados do retangulo:\n");
    printf("  Centro:\n");
    printf("    x: ");
    scanf("%d", &rect.centro.x);
    printf("    y: ");
    scanf("%d", &rect.centro.y);
    printf("  Largura: ");
    scanf("%d", &rect.geom.retangulo.largura);
    printf("  Altura: ");
    scanf("%d", &rect.geom.retangulo.altura);

    // entrada dos dados do círculo
    printf("Dados do circulo:\n");
    printf("  Centro:\n");
    printf("    x: ");
    scanf("%d", &circ.centro.x);
    printf("    y: ");
    scanf("%d", &circ.centro.y);
    printf("  Raio: ");
    scanf("%d", &circ.geom.circulo.raio);

    // dados da movimentação
    printf("Apos a criacao, mover em:\n");
    printf("  x: ");
    scanf("%d", &pMover.x);
    printf("  y: ");
    scanf("%d", &pMover.y);

    // dados do redimensionamento
    printf("Apos mover, redimensionar pelo fator: ");
    scanf("%f", &fator);

    printf("\n\n");

    // saída original
    printf("Original:\n");
    imprimirForma(&rect);
    printf("  Area: %d\n", calcularArea(&rect));
    printf("======================\n");

    imprimirForma(&circ);
    printf("  Area: %d\n", calcularArea(&circ));
    printf("======================\n\n");

    // saída após mover
    mover(&rect, pMover.x, pMover.y);
    mover(&circ, pMover.x, pMover.y);

    printf("Apos mover:\n");
    imprimirForma(&rect);
    printf("  Area: %d\n", calcularArea(&rect));
    printf("======================\n");

    imprimirForma(&circ);
    printf("  Area: %d\n", calcularArea(&circ));
    printf("======================\n\n");

    // saída apos redimensionar
    rect = redimensionar(&rect, fator);
    circ = redimensionar(&circ, fator);

    printf("Apos redimensionar:\n");
    imprimirForma(&rect);
    printf("  Area: %d\n", calcularArea(&rect));
    printf("======================\n");

    imprimirForma(&circ);
    printf("  Area: %d\n", calcularArea(&circ));
    printf("======================\n\n");

    return 0;
}

int calcularArea(const Forma *f) {

    const double PI = acos(-1);

    switch(f->tipo){
        case RETANGULO:
            return f->geom.retangulo.largura * f->geom.retangulo.altura;
        break;

        case CIRCULO:
            return PI * pow(f->geom.circulo.raio, 2);
        break;

        default:
            printf("erro ao calcular a area da forma.");
            return -1;
        break;
    }

}

void mover(Forma *f, int x, int y) {

    f->centro.x += x;
    f->centro.y += y;

}

Forma redimensionar(const Forma *f, float fator) {

    Forma forma = *f;
    switch(f->tipo){
        case RETANGULO:
            forma.geom.retangulo.altura = f->geom.retangulo.altura * fator;
            forma.geom.retangulo.largura = f->geom.retangulo.largura * fator;

            forma.centro.x += (forma.geom.retangulo.largura - f->geom.retangulo.largura) / 2;
            forma.centro.y += (forma.geom.retangulo.altura - f->geom.retangulo.altura) / 2;

            return forma;
        break;

        case CIRCULO:
            forma.geom.circulo.raio = f->geom.circulo.raio * fator;

            forma.centro.x += forma.geom.circulo.raio - f->geom.circulo.raio;
            forma.centro.y += forma.geom.circulo.raio - f->geom.circulo.raio;

            return forma;
        break;

    }
}

void imprimirForma(const Forma *f) {

    switch(f->tipo){
        case RETANGULO:
            printf(
                "===== Retangulo ======\n"
                "| Centro: (%+02d, %+02d) |\n"
                "| Largura: %d        |\n"
                "| Altura: %d         |\n"
                "======================\n",
                f->centro.x,
                f->centro.y,
                f->geom.retangulo.largura,
                f->geom.retangulo.altura
            );
        break;

        case CIRCULO:
            printf(
                "====== Circulo =======\n"
                "| Centro: (%+02d, %+02d) |\n"
                "| Raio: %d           |\n"
                "======================\n",
                f->centro.x,
                f->centro.y,
                f->geom.circulo.raio
            );

        break;

        default:
            printf("Nao foi possivel imprimir a forma. (nao tem tipo do enum)");
        break;

    }

}
