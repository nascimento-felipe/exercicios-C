/*
    Arquivo: ex10.3.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int hora;
    int minuto;
    int segundo;
} Hora;

Hora gerarHora(int quantidadeSegundos);
void imprimirHora(const Hora *hora);

int main() {

    int segundosTotais;
    Hora horasTotais;

    // entrada dos segundos
    printf("Segundos: ");
    scanf("%d", &segundosTotais);

    horasTotais = gerarHora(segundosTotais);

    // saída
    printf("\n\nHora correspondente: ");
    imprimirHora(&horasTotais);


    return 0;
}

Hora gerarHora(int quantidadeSegundos) {

    Hora h;

    h.hora = quantidadeSegundos / 3600;
    quantidadeSegundos %= 3600;

    h.minuto = quantidadeSegundos / 60;
    quantidadeSegundos %= 60;

    h.segundo = quantidadeSegundos;

    return h;

}

void imprimirHora(const Hora *hora) {

    printf("%02d:%02d:%02d", hora->hora, hora->minuto, hora->segundo);

}
