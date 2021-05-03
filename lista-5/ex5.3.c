#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

int main() {

    int array[M][N];
    int multiplicador;
    int arrayMult[M][N];

    // entrada do array de duas dimensões
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // entrada do multiplicador
    printf("Multiplicar por: ");
    scanf("%d", &multiplicador);

    // popular arrayMult
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            arrayMult[i][j] = array[i][j] * multiplicador;
        }
    }

    // saida
    printf("\n\narrayMult:\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%03d", arrayMult[i][j]);
            if(j < N - 1){
                printf(" ");
            }
        }
        
        printf("\n");
    }


    return 0;
}