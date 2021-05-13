#include <stdio.h>
#include <stdlib.h>

int main() {

    int arrayA[3][2];
    int arrayB[2][3];
    int arrayMult[3][3];

    // entrada do array A
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &arrayA[i][j]);
        }
    }

    // entrada do array B
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &arrayB[i][j]);
        }
    }

    // multiplicacao dos arrays
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arrayMult[i][j] = (arrayA[i][0] * arrayB[0][j]) + (arrayA[i][1] * arrayB[1][j]);
        }
    }

    // saida
    printf("\n\nA x B =\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%03d", arrayMult[i][j]);

            if(j < 2){
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}
