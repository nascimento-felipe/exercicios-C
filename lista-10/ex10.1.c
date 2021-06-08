/*
    Arquivo: ex10.1.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int compararData(const Data *d1, const Data *d2);
void imprimirData(const Data *data);

int main() {

    Data primeiraData;
    Data segundaData;
    int resultado;

    // entrada da primeira data
    printf("Data 1\n");

    printf("    dia: ");
    scanf("%d", &primeiraData.dia);
    printf("    mes: ");
    scanf("%d", &primeiraData.mes);
    printf("    ano: ");
    scanf("%d", &primeiraData.ano);

    // entrada da segunda data
    printf("Data 2\n");

    printf("    dia: ");
    scanf("%d", &segundaData.dia);
    printf("    mes: ");
    scanf("%d", &segundaData.mes);
    printf("    ano: ");
    scanf("%d", &segundaData.ano);


    // saída
    resultado = compararData(&primeiraData, &segundaData);
    printf("\n\n");

    if( resultado >= 0){ // d1 >= d2
        imprimirData(&segundaData);
        printf(" <= ");
        imprimirData(&primeiraData);
    } else { // d2 > d1
        imprimirData(&primeiraData);
        printf(" <= ");
        imprimirData(&segundaData);
    }

    return 0;
}

int compararData(const Data *d1, const Data *d2) {

    if(d1->ano > d2->ano){
        return 1;
    } else if(d2->ano > d1->ano){
        return -1;
    }

    if(d1->mes > d2->mes){
        return 1;
    } else if(d2->mes > d1->mes){
        return -1;
    }

    if(d1->dia > d2->dia){
        return 1;
    } else if(d2->dia > d1->dia){
        return -1;
    }

    return 0;
}

void imprimirData(const Data *data) {

    printf("%02d/%02d/%04d", data->dia, data->mes, data->ano);

}
