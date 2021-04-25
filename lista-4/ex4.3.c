#include <stdio.h>
#include <stdlib.h>

int main() {

    float array[5];
    float somatorio = 0;
    float produtorio = 1;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);

        somatorio += array[i];
        produtorio *= array[i];
    }

    printf("Somatorio: %.2f\n", somatorio);
    printf("Produtorio: %.2f", produtorio);

    return 0;
}