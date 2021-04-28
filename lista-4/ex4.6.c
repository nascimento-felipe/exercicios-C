#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[5];
    int numeroBuscador;
    int ocorrencias = 0;
    int arrayOco[5] = {0,0,0,0,0};

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &numeroBuscador);

    for(int i = 0; i < 5; i++){
        if(array[i] == numeroBuscador){
            ocorrencias++;

            for(int j = 0; j < 5; j++){
                if(arrayOco[j] == 0){
                    arrayOco[j] = i + 1;
                    printf("%d", arrayOco[j]);
                    j = 5;
                }
            // if(arrayOco[0] == 0){
            //     arrayOco[0] = i + 1;
            // } else if(arrayOco[1] == 0){
            //     arrayOco[1] = i + 1;
            // } else if(arrayOco[2] == 0){
            //     arrayOco[2] = i + 1;
            // } else if(arrayOco[3] == 0){
            //     arrayOco[3] = i + 1;
            // } else {
            //     arrayOco[4] = i + 1;
            // }
            }

        }
    }

    if(ocorrencias == 0){
        printf("O array nao contem o valor %d.", numeroBuscador);
    } else if(ocorrencias == 5){
            printf("Todos os 5 indices contem o valor %d", numeroBuscador);
    } else {
        printf("O valor %d foi encontrado ", numeroBuscador);

        if(ocorrencias == 1){
            printf("no indice ");
        } else {
            printf("nos indices ");
        }

        if(ocorrencias == 1){
            printf("%d do array.", arrayOco[0] - 1);
        } else if(ocorrencias == 2){
            printf("%d e %d do array.", arrayOco[0] - 1, arrayOco[1] - 1);
        } else if(ocorrencias == 3){
            printf("%d, %d e %d do array.", arrayOco[0] - 1, arrayOco[1] - 1, arrayOco[2] - 1);
        } else {
            printf("%d, %d, %d e %d do array.", arrayOco[0] - 1, arrayOco[1] - 1, arrayOco[2] - 1, array[3] - 1);
        }
    }

    return 0;
}
