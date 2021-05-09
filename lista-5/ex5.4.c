#include <stdio.h>
#include <stdio.h>

#define M 2
#define N 2

int main() {


    int array[M][N];
    int determinante;

    // entrada do array
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // cálculo do determinante
    determinante = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);


    // saída
    printf("Determinante: %d", determinante);
    return 0;
}