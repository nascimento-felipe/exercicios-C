#include <stdio.h>
#include <stdlib.h>

int main() {
    int ladoQuadrado;
    int perimetro;
    int area;

    printf("Valor do lado: ");
    scanf("%d", &ladoQuadrado);

    perimetro = 4 * ladoQuadrado;
    area = ladoQuadrado * ladoQuadrado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d\n", area);

    return 0;
}
