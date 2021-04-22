#include <stdio.h>
#include <stdlib.h>

int main() {

    for(int i = 0; i <= 5; i++){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n"); // divisão do FOR.

    for(int i = 0; i < 5; i++){
        for(int j = 5; j > i; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n"); // divisão do FOR

    for(int i = 0; i < 5; i++){
        for(int j = 4; j > i; j--){
            printf(" ");
        }
        for(int k = 0; k <= i; k ++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n"); // divisão do (adivinha?) FOR.

    for(int i = 0; i <= 5; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int k = 5; k > i; k--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
