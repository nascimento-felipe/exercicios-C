#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int array[5];
    int arrayInv[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 4; i >= 0; i--){
        arrayInv[4-i] = array[i];

        printf("arrayInv[%d] = %d\n", 4-i, arrayInv[4-i]);
    }
    
    return 0;
}