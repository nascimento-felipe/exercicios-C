/*
    Arquivo: ex10.5.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    float numerador;
    float denominador;
} Fracao;

Fracao somar(const Fracao *f1, const Fracao *f2);
Fracao subtrair(const Fracao *f1, const Fracao *f2);
Fracao multiplicar(const Fracao *f1, const Fracao *f2);
Fracao dividir(const Fracao *f1, const Fracao *f2);
void imprimirFracao(const Fracao *f);

int main() {

    Fracao primeiraFracao;
    Fracao segundaFracao;
    Fracao somaMain;
    Fracao subtMain;
    Fracao multMain;
    Fracao diviMain;


    // entrada da primeira fração
    printf("Fracao 1\n");
    printf("    Numerador: ");
    scanf("%f", &primeiraFracao.numerador);
    printf("    Denominador: ");
    scanf("%f", &primeiraFracao.denominador);

    // entrada da segunda fração
    printf("Fracao 2");
    printf("    Numerador: ");
    scanf("%f", &segundaFracao.numerador);
    printf("    Denominador: ");
    scanf("%f", &segundaFracao.denominador);

    somaMain = somar(&primeiraFracao, &segundaFracao);
    subtMain = subtrair(&primeiraFracao, &segundaFracao);
    multMain = multiplicar(&primeiraFracao, &segundaFracao);
    diviMain = dividir(&primeiraFracao, &segundaFracao);

    // saída
    printf("\n\n");
        // soma
        printf("\n");
        imprimirFracao(&primeiraFracao);
        printf(" + ");
        imprimirFracao(&segundaFracao);
        printf(" = ");
        imprimirFracao(&somaMain);

        // subtração
        printf("\n");
        imprimirFracao(&primeiraFracao);
        printf(" - ");
        imprimirFracao(&segundaFracao);
        printf(" = ");
        imprimirFracao(&subtMain);

        // multiplicação
        printf("\n");
        imprimirFracao(&primeiraFracao);
        printf(" * ");
        imprimirFracao(&segundaFracao);
        printf(" = ");
        imprimirFracao(&multMain);

        // divisão
        printf("\n");
        imprimirFracao(&primeiraFracao);
        printf(" / ");
        imprimirFracao(&segundaFracao);
        printf(" = ");
        imprimirFracao(&diviMain);
    // fim da saída

    return 0;
}

Fracao somar(const Fracao *f1, const Fracao *f2) {

    Fracao soma;

    if(f1->denominador == f2->denominador){
        soma.denominador = f1->denominador;
        soma.numerador = f1->numerador + f2->numerador;

        return soma;
    } else {
        soma.denominador = f1->denominador * f2->denominador;
        soma.numerador = ((soma.denominador / f1->denominador) * f1->numerador) + ((soma.denominador/ f2->denominador) * f2->numerador);

        return soma;
    }

}

Fracao subtrair(const Fracao *f1, const Fracao *f2) {

    Fracao sub;

    if(f1->denominador == f2->denominador){
        sub.denominador = f1->denominador;
        sub.numerador = f1->numerador - f2->numerador;

        return sub;
    } else {
        sub.denominador = f1->denominador * f2->denominador;
        sub.numerador = ((sub.denominador / f1->denominador) * f1->numerador) - ((sub.denominador / f2->denominador) * f2->numerador);

        return sub;
    }
}

Fracao multiplicar(const Fracao *f1, const Fracao *f2) {

    Fracao mul;

    mul.denominador = f1->denominador * f2->denominador;
    mul.numerador = f1->numerador * f2->numerador;

    return mul;

}

Fracao dividir(const Fracao *f1, const Fracao *f2) {

    Fracao div;

    div.denominador = f1->denominador * f2->numerador;
    div.numerador = f1->numerador * f2->denominador;

    return div;

}

void imprimirFracao(const Fracao *f) {

    printf("%.2f/%.2f", f->numerador, f->denominador);

}
