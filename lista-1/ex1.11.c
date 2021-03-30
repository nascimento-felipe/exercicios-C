#include <stdio.h>
#include <stdlib.h>

int main() {
    int diagonalMaior;
    int diagonalMenor;
    int area;

    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("Area = %d\n", area);

    return 0;
}
