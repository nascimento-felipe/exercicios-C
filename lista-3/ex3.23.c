#include <stdio.h>
#include <stdlib.h>

int main() {

    float notaAtualFor;
    float somaNotas = 0;
    float media = 0;

    printf("Forneca a nota de 10 alunos: \n");

    for(int i = 1; i <= 10; i++){
        printf("Nota %02d: ", i);
        scanf("%f", &notaAtualFor);

        somaNotas += notaAtualFor;
    }

    media = somaNotas / 10;

    printf("A media aritmetica das dez notas e: %.2f", media);

    return 0;
}
