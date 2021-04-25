#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int numeroBuscar;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        printf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numeroBuscar);

    

    return 0;
}