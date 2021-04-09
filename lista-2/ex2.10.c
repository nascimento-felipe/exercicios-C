#include <stdio.h>
#include <stdlib.h>

int main() {
    float ladoA;
    float ladoB;
    float ladoC;

    printf("a: ");
    scanf("%f", &ladoA);

    printf("b: ");
    scanf("%f", &ladoB);

    printf("c: ");
    scanf("%f", &ladoC);

    if((ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB) && (ladoA - ladoC) < ladoB && ladoB < (ladoA + ladoC) &&(ladoB - ladoC) < ladoA && ladoA < (ladoB + ladoC)){
        if(ladoA == ladoB && ladoB == ladoC){
            printf("Triangulo EQUILATERO");
        } else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
            printf("Triangulo ISOSCELES");
        } else {
            printf("Triangulo ESCALENO");
        }
    } else {
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    return 0;
}
