/*
    Arquivo: ex10.4.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float imaginario;
} Complexo;

Complexo somar(const Complexo *c1, const Complexo *c2);
void imprimirComplexo(const Complexo *c);

int main() {

    Complexo primeiroComplexo;
    Complexo segundoComplexo;
    Complexo resultadoComplexo;

    // entrada do primeiro complexo
    printf("Complexo 1\n");
    printf("    Parte real: ");
    scanf("%f", &primeiroComplexo.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &primeiroComplexo.imaginario);

    // entrada do segundo complexo
    printf("Complexo 2\n");
    printf("    Parte real: ");
    scanf("%f", &segundoComplexo.real);
    printf("    Parte imaginaria: ");
    scanf("%f", &segundoComplexo.imaginario);

    resultadoComplexo = somar(&primeiroComplexo, &segundoComplexo);

    // saida
    printf("\n\n");
    imprimirComplexo(&primeiroComplexo);
    printf(" + ");
    imprimirComplexo(&segundoComplexo);
    printf(" = ");
    imprimirComplexo(&resultadoComplexo);

    return 0;
}

Complexo somar(const Complexo *c1, const Complexo *c2) {

    Complexo resultadoSoma;

    resultadoSoma.real = c1->real + c2->real;
    resultadoSoma.imaginario = c1->imaginario + c2->imaginario;

    return resultadoSoma;

}

void imprimirComplexo(const Complexo *c) {

    printf("(%.2f + %.2fi)", c->real, c->imaginario);

}
