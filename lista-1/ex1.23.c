#include <stdio.h>
#include <stdlib.h>

int main() {
    int anoNascimento;
    int anoAtual;
    int idade;

    printf("Ano de nascimento : ");
    scanf("%d", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    printf("Idade aproximada: %d anos", idade);

    return 0;
}
