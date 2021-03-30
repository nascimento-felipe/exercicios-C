#include <stdio.h>
#include <stdlib.h>


int main() {
    int baseMaior;
    int baseMenor;
    int altura;
    int area;

    printf("Valor da base maior: ");
    scanf("%d", &baseMaior);

    printf("Valor da base menor: ");
    scanf("%d", &baseMenor);

    printf("Valor da altura: ");
    scanf("%d", &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    printf("Area = %d\n", area);

    return 0;
}
