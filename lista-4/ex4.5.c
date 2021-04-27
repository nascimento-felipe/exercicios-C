#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int numeroBuscador;
    int ocorrencias = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Buscar por: ");
    scanf("%d", &numeroBuscador);

    for(int i = 0; i < 5; i++){
        if(array[i] == numeroBuscador){
            ocorrencias++;
        }
    }

    if(ocorrencias == 0 ){
        printf("O array nao contem o valor %d.", numeroBuscador);
    } else if(ocorrencias == 1){
        printf("O array contem 1 ocorrencia do valor %d.", numeroBuscador);
    } else {
        printf("O array contem %d ocorrencias do valor %d.", ocorrencias, numeroBuscador);
    }
    return 0;
}