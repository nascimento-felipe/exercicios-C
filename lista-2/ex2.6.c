#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor;

    printf("Entre com um valor: ");
    scanf("%f", &valor);

    if(valor > 20){
        printf("A metade de %.2f e %.2f", valor, valor / 2);
    } else {
        printf("O triplo de %.2f e %.2f", valor, valor * 3);
    }

    return 0;
}
