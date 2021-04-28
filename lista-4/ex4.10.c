#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int arrayCopias[5] = { -10, -10, -10, -10, -10};
    int existemCopias = 0;
    int numeroMaior;
    int indiceArrayCopia = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &numeroMaior);

    for(int i = 0; i < 5; i++){
        if(array[i] > numeroMaior){
            existemCopias++;
            arrayCopias[i] = array[i];
        }
    }

    if(existemCopias > 0){   
        for(int i = 0; i < 5; i++){
            if(arrayCopias[i] != -10){
                printf("arrayCopia[%d] = %d\n", indiceArrayCopia, arrayCopias[i]);
                indiceArrayCopia++;
            }
        }
    } else {
        printf("Nao houve copia!");
    }
    


    return 0;
}