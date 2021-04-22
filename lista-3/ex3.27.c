#include <stdio.h>
#include <stdlib.h>

int main() {
    int pessoa = 1;
    float numeroAtual;
    float maiorPeso = 15;
    float somaPesos60 = 0;
    float quantidadePesos60 = 0;
    float media;

    do {
        printf("Entre com o peso da pessoa %02d: ", pessoa);
        scanf("%f", &numeroAtual);

        if(numeroAtual > 60){
            somaPesos60 += numeroAtual;
            quantidadePesos60++;
        }

        if(numeroAtual >= maiorPeso){
            maiorPeso = numeroAtual;
        }

        if(pessoa == 1 && numeroAtual < 0){
            maiorPeso = 0;
            media = 0;
        }

        pessoa++;

    }while(numeroAtual >= 0);

    if(quantidadePesos60 > 0){
        media = somaPesos60 / quantidadePesos60;
    }

    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", maiorPeso);

    return 0;
}
