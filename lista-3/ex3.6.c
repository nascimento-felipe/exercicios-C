#include <stdio.h>
#include <stdlib.h>

int main() {

    int valor;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &valor);

    if(valor >= 0){
        for(valor; valor >= 0; valor--){
            printf("%d ", valor);
        }
    } else {
        printf("Valor incorreto (negativo)");
    }

    return 0;
}
