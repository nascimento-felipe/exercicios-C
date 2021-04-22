#include <stdio.h>
#include <stdlib.h>

int main() {

    int valorAtual;
    float soma = 0;
    float media = 0;
    int quantidade = 0;

    do{
        printf("Entre com um valor: ");
        scanf("%d", &valorAtual);

        if(valorAtual < 0){

        } else {
            soma += valorAtual;
            quantidade++;
        }
    } while (valorAtual >= 0);

    if(quantidade >= 1){
        media = soma / quantidade;
    }

    printf("Somatorio: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d\n", quantidade);

    return 0;
}
