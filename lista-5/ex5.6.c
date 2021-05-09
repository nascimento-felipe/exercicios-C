#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main() {

    int array[M][N];
    int arrayTransposto[N][M];


    // entrada do array
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // transposição do array
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < M; j++){
            arrayTransposto[i][j] = array[j][i];
        }
    }

    // saída 
    printf("\n\nM:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%03d", array[i][j]);

            if(j < N - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nMt:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%03d", arrayTransposto[i][j]);

            if(j < M - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}