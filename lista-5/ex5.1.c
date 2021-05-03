#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2

int main() {

    int array[M][N];

    // entrada do array
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // saída 
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N;){
            printf("%03d", array[i][j]);
            j++;
            if(j < N){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}