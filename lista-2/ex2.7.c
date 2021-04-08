#include <stdio.h>
#include <stdlib.h>

int main() {
    float pn;
    float sn;
    float soma;

    printf("Entre com um numero: ");
    scanf("%f", &pn);

    printf("Entre com outro numero: ");
    scanf("%f", &sn);

    if(pn + sn > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", pn, sn);
    } else {
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", pn, sn, pn-sn);
    }

    return 0;
}
