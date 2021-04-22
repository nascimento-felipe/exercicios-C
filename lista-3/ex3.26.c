#include <stdio.h>
#include <stdlib.h>

int main() {

    int valorAtual;
    int maiorValor = 0;
    int menorValor = 0;
    int i = 0; // variável que controla se o programa ja rodou ou não

    do{
        printf("Entre com um valor: ");
        scanf("%d", &valorAtual);

        if(i == 0 && valorAtual >= 0){
            menorValor = 9999;
            // criação da variável menor valor
            // pra cumprir o requisito: "Caso o número negativo seja o primeiro
            // a ser fornecido, mostrar as 2 variáveis como 0"
        }

        if(valorAtual >= maiorValor){
            maiorValor = valorAtual;
        }

        if(valorAtual < menorValor && valorAtual >= 0){
            menorValor = valorAtual;
        }

        i = 1;

    }while(valorAtual >= 0);

    printf("Menor numero: %d\n", menorValor);
    printf("Maior numero: %d", maiorValor);


    return 0;
}
