#include <stdio.h>
#include <stdlib.h>

int main() {
    float largura;
    float altura;
    float perimetro;
    float area;

    printf("Valor da largura: ");
    scanf("%f", &largura);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    perimetro = (2 * largura) + (2 * altura);
    area = largura * altura;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);
    return 0;
}
