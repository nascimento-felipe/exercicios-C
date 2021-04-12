#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero1;
    float numero2;
    char caracter;

    printf("N1: ");
    scanf("%f", &numero1);

    printf("N2: ");
    scanf("%f", &numero2);

    printf("Escolha uma operacao de acordo com o menu: ");
    printf("\n\t+) Adicao;");
    printf("\n\t-) Subtracao;");
    printf("\n\t*) Multiplicacao;");
    printf("\n\t/) Divisao.\n");
    printf("Operacao: ");
    scanf(" %c", &caracter);

    switch(caracter){
    case '+':
        printf("\n%.2f + %.2f = %.2f", numero1, numero2, numero1 + numero2);
        break;
    case '-':
        printf("\n%.2f - %.2f = %.2f", numero1, numero2, numero1 - numero2);
        break;
    case '*':
        printf("\n%.2f * %.2f = %.2f", numero1, numero2, numero1 * numero2);
        break;
    case '/':
        printf("\n%.2f / %.2f = %.2f", numero1, numero2, numero1 / numero2);
        break;
    default:
        printf("\nOpcao invalida!");
        break;
    }

    return 0;
}
