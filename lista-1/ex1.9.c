#include <stdio.h>
#include <stdlib.h>

int main() {

    int base;
    int altura;
    int area;

    printf("Valor da base: ");
    scanf("%d", &base);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = base * altura / 2;

    printf("Area = %d\n", area);

    return 0;
}
