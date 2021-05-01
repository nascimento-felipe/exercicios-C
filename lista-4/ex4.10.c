#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int arrayCopias[5] = { 0 };
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
            arrayCopias[indiceArrayCopia] = array[i];
            indiceArrayCopia++;
        }
    }

    if(existemCopias > 0){   
        for(int i = 0; i < indiceArrayCopia; i++){
                printf("arrayCopia[%d] = %d\n", i, arrayCopias[i]);
        }
    } else {
        printf("Nao houve copia!");
    }
    


    return 0;
}