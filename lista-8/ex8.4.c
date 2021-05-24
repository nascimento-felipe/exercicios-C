/*
    Arquivo: ex8.4.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehBissexto( int ano );

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );

int main() {

    int diaDoAno;
    int ano;
    int mes = 1;
    int dia = 1;

    // entrada do dia
    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);

    // entrada do ano
    printf("Ano: ");
    scanf("%d", &ano);

    // invocação da função
    decompoeData( diaDoAno, ano, &mes, &dia ); 

    // saída
    printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes);

    return 0;
}

bool ehBissexto( int ano ) {

    if(ano % 4 == 0 && ano % 100 != 0){
        return true;
    } else {
        return false;
    }

}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ) {

    int i = 1;

    for( i; i < 12; ){
        if( i % 2 == 0 && i < 8 ) {
            if(i == 2) {
                if( ehBissexto(ano) ){
                    if(diaDoAno - 29 > 0){
                        i++;
                        diaDoAno -= 29;
                    } else {
                        *dia = diaDoAno;
                        break;   
                    }
                } else {
                    if( diaDoAno - 28 > 0) {
                        i++;
                        diaDoAno -= 28;
                    } else {
                        *dia = diaDoAno;
                        break;
                    }
                }
            } else {
                if(diaDoAno - 30 > 0) {
                    i++;
                    diaDoAno -= 30;
                } else {
                    *dia = diaDoAno;
                    break;
                }
            }
        } else if( i % 2 != 0 && i < 8 ) {
            if(diaDoAno - 31 > 0){
                i++;
                diaDoAno -= 31;
            } else {
                *dia = diaDoAno;
                break;
            }
        } else if( i % 2 == 0 && i >= 8 ) {
            if(diaDoAno - 31 > 0){
                i++;
                diaDoAno -= 31;
            } else {
                *dia = diaDoAno;
                break;
            }
        } else if( i % 2 != 0 && i >= 8 ){
            if( diaDoAno - 30 > 0 ){
                i++;
                diaDoAno -= 30;
            } else {
                *dia = diaDoAno;
                break;
            }
        }
    }

    *mes = i;

}