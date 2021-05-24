/*
    Arquivo: ex8.3.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos );

int main() {

    int totalSegundos;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    // entrada do total de segundos
    printf("Total de segundos: ");
    scanf("%d", &totalSegundos);

    // invocação da função
    decompoeTempo( totalSegundos, &horas, &minutos, &segundos );

    // saída
    printf("\n\n%d segundo(s) corresponde(m) a:\n", totalSegundos);
    printf("    %d hora(s)\n", horas);
    printf("    %d minuto(s)\n", minutos);
    printf("    %d segundo(s)", segundos);

    return 0;
}

void decompoeTempo( int totalSegundos, int *horas, int *minutos, int *segundos ) {

    if(totalSegundos / 3600 > 0){
        *horas = totalSegundos / 3600;
        totalSegundos %= 3600;
    }
    if(totalSegundos / 60 > 0) {
        *minutos = totalSegundos / 60;
        totalSegundos %= 60;
    }
    
    *segundos = totalSegundos;

}