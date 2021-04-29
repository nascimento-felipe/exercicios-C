#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[10];
    int quantidadeImpares;
    int q = 10;

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);

        if(array[i] % 2 != 0){
            quantidadeImpares++;
        }
    }

    for(int i = 0; i < q; i++){
        if(array[i] % 2 == 0){
            for(int j = i; j < q; j++){
                array[j] = array [j+1];
            }
            q--;
            i--;
        }
    }

    for(int i = 0; i < quantidadeImpares; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}