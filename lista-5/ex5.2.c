#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

int main() {

    int primeiroArray[M][N];
    int segundoArray[M][N];
    int arraySoma[M][N];

    int qualArrayEstou = 1;

    // entrada do primeiro array
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &primeiroArray[i][j]);
        }
    }

    // entrada do segundo array
    for(int i = 0; i < M; i ++){
        for(int j = 0; j < N; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &segundoArray[i][j]);
        }
    }

    // soma dos arrays e colocando no arraySoma
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            arraySoma[i][j] = primeiroArray[i][j] + segundoArray[i][j];
        }
    }

    // saída
    printf("\n\narray1:       array2:       arraySoma:\n");

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            switch(qualArrayEstou){
                case 1:
                    printf("%03d", primeiroArray[i][j]);


                    if(j < N - 1) {
                        printf(" ");
                    }

                    if(j == 2 && i == 1){
                        printf(" + ");
                        j = -1;
                        qualArrayEstou = 2;
                    } else if(j == 2 && i != 1){
                        printf("   ");
                        j = -1;
                        qualArrayEstou = 2;
                    }

                    break;
                case 2:
                    printf("%03d", segundoArray[i][j]);

                    if(j < N - 1){
                        printf(" ");
                    }

                    if(j == 2 && i == 1){
                        printf(" = ");
                        j = -1;
                        qualArrayEstou = 3;
                    } else if(j == 2){
                        printf("   ");
                        j = -1;
                        qualArrayEstou = 3;
                    }
                    break;
                case 3:

                    printf("%03d", arraySoma[i][j]);

                    if(j < N - 1){
                        printf(" ");
                    }

                    if(j == 2){
                        qualArrayEstou = 1;
                        j = N;
                    }

                    break;
            }
        }
        printf("\n");
    }

    return 0;
}
