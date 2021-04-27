#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroArray[5];
    int segundoArray[5];
    int arraySoma[5];

    printf("Forneca os valores do primeiro array: \n");
    for(int i = 0; i < 5; i++){
        printf("\tarray1[%d]: ", i);
        scanf("%d", &primeiroArray[i]);
    }

    printf("\nForneca os valores do segundo array: \n");
    for(int i = 0; i < 5; i++){
        printf("\tarray2[%d]: ", i);
        scanf("%d", &segundoArray[i]);

        arraySoma[i] = primeiroArray[i] + segundoArray[i];
    }

    for(int i = 0; i < 5; i++){
        printf("arraySoma[%d] = %d\n", i, arraySoma[i]);
    }

    return 0;
}
