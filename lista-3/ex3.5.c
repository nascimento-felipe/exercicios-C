#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &valor);

    if(valor >= 0){
        for(int i = 0; i <= valor; i++){
            printf(" %d", i);
        }
    } else {
        printf("Valor incorreto (negativo)");
    }


    return 0;
}
