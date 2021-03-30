#include <stdio.h>
#include <stdlib.h>

int main() {
    float ladoQuadrado;
    float perimetro;
    float area;

    printf("Valor do lado: ");
    scanf("%f", &ladoQuadrado);

    perimetro = 4 * ladoQuadrado;
    area = ladoQuadrado * ladoQuadrado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);
    return 0;
}
