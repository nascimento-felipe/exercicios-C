#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;
    int numeroFatorial = 1;

    printf("Numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        for(int i = 1; i <= numero; i++){
            numeroFatorial *= i;
        }

        printf("%d! = %d", numero, numeroFatorial);
    } else {
        printf("Nao ha fatorial de numero negativo.");
    }

    return 0;
}
