#include <stdio.h>
#include <stdlib.h>

int main() {
    int largura;
    int altura;
    int perimetro;
    int area;

    printf("Valor da largura: ");
    scanf("%d", &largura);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    perimetro = (2 * largura) + (2 * altura);
    area = largura * altura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d\n", area);

    return 0;
}
