#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidadeLados;
    float medidaLados;

    printf("Entre com uma quantidade de lados: ");
    scanf("%d", &quantidadeLados);

    printf("Entre com a medida do lado: ");
    scanf("%f", &medidaLados);

    if(quantidadeLados == 3){
        printf("TRIANGULO de perimetro %.2f", 3 * medidaLados);
    } else if(quantidadeLados == 4) {
        printf("QUADRADO de area %.2f", medidaLados * medidaLados);
    } else if(quantidadeLados == 5) {
        printf("PENTAGONO");
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}
