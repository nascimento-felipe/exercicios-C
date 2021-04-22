#include <stdio.h>
#include <stdlib.h>

int main() {

    int altura;

    printf("Altura: ");
    scanf("%d", &altura);

    if(altura > 0){
        for(int i = 1; i <= altura; i++){
            for(int j = altura; j > i; j--){
                printf(" ");
            }
            for(int k = 0; k < i; k++){
                printf("*");
            }
            for(int l = 1; l < i; l++){
                printf("*");
            }
            printf("\n");
        }
    } else {
        for(int i = 1; i > altura; i--){
            for(int j = 1; j > i; j--){
                printf(" ");
            }
            for(int k = altura + 2; k <= i; k++){
                printf("*");
            }
            for(int l = altura + 2; l < i; l++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
