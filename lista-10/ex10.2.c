/*
    Arquivo: ex10.2.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int diaDoAno(const Data *data);

int main() {

    Data dataInserida;

    // entrada da data
    printf("dia: ");
    scanf("%d", &dataInserida.dia);
    printf("mes: ");
    scanf("%d", &dataInserida.mes);
    printf("ano: ");
    scanf("%d", &dataInserida.ano);

    // saída
    printf("\n\n");
    printf("O dia do ano da data %02d/%02d/%04d eh %d.",
       dataInserida.dia,
       dataInserida.mes,
       dataInserida.ano,
       diaDoAno(&dataInserida)
    );

    return 0;
}

int diaDoAno(const Data *data) {

    int diaAno;
    int diaData = data->dia;

    for(int i = 1; i < data->mes; i++){
        switch(i) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                diaAno += 31;
                break;

            case 2:
                if(data->ano % 4 == 0){
                    diaAno += 29;
                } else {
                    diaAno +=28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                diaAno += 30;
                break;
        }
    }

    diaAno += diaData;

    return diaAno;

}
