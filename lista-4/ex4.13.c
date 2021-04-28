#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[10];
    int posicaoRemover;

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do{

        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicaoRemover);
        
        if(posicaoRemover < 0 || posicaoRemover > 9){
            printf("Posicao invalida, forneca novamente!\n");
        }
    
    } while(posicaoRemover < 0 || posicaoRemover > 9);

    for(int i = posicaoRemover; i < 9; i++){
        array[i] = array[i + 1]; 
    }

    for(int i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}