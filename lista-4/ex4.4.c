#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[5];
    int numeroBuscador;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numeroBuscador);

    for(int i = 0; i < 5; i++){
        printf("Indice %d: ", i);

        if(array[i] == numeroBuscador){
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}
