#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

int main() {

    // coloquei como "a" para facilitar a escrita do cálculo do determinante
    int a[M][N];
    int determinante;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // cálculo do determinante
    determinante = (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) - ((a[0][2] * a[1][1] * a[2][0]) + (a[0][0] * a[1][2] * a[2][1]) + (a[0][1] * a[1][0] * a[2][2]));

    // saída
    printf("\n\nDeterminante: %d", determinante);

    return 0;
}
