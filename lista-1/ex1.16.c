#include <stdio.h>
#include <stdlib.h>

int main() {
    float base;
    float altura;
    float area;

    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Area = %.2f", area);
    return 0;
};
