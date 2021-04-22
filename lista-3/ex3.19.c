#include <stdio.h>
#include <stdlib.h>

int main() {

    char ast = '*';

    for(int i = 0; i < 12; i++){
        if(i <= 5){
            for(int j = 0; j < i; j++){
                printf("%c", ast);
            }
            printf("\n");
        } else {
            for(int j = 10; j > i; j--){
                printf("%c", ast);
            }
            printf("\n");
        }
    }

    return 0;
}
