#include <stdio.h>
#include <stdlib.h>

int main() {
    char tipoGraus;
    float grausC;
    float grausF;

    printf("Escolha uma operacao de acordo com o menu: \n");
    printf("\tC) Celsius -> Fahrenheit;\n");
    printf("\tF) Fahrenheit -> Celsius.\n");

    printf("Opcao: ");
    scanf(" %c", &tipoGraus);

    switch(tipoGraus){
    case 'C':
        printf("Entre com a temperatura em graus Celsius: ");
        scanf("%f", &grausC);

        grausF = (grausC * 1.8) + 32;

        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", grausC, grausF);
        break;
    case 'F':
        printf("Entre com a temperatura em graus Fahrenheit: ");
        scanf("%f", &grausF);

        grausC = (grausF - 32) / 1.8;

        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", grausF, grausC);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}
