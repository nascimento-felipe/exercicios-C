#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[5];

    // entrada dos valores do array
    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // troca dos valores do array
    for(int i = 1; i < 5; i++){
        array[i-1] = array[i];
    }

    // saída do array modificado
    for(int i = 0; i < 4; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}