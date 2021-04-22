#include <stdio.h>
#include <stdlib.h>

int main() {
    int pessoaAtual = 0;
    int idadeAtual;
    int menores21 = 0;
    int maiores50 = 0;

    do{
        pessoaAtual++;
        printf("Idade da pessoa %02d: ", pessoaAtual);
        scanf("%d", &idadeAtual);

        if(idadeAtual < 21 && idadeAtual > -1){
            menores21++;
        } else if(idadeAtual > 50){
            maiores50++;
        }
    } while(idadeAtual >= 0);

    printf("Total de pessoas menores de 21 anos: %d\n", menores21);
    printf("Total de pessoas com mais de 50 anos: %d", maiores50);
    return 0;
}
