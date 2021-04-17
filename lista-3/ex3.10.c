#include <stdio.h>
#include <stdlib.h>

int main() {

    for(int valor = 45; valor <= 60; valor++){
        printf("%d: ", valor);

        if(valor % 4 == 0){
            printf("divisivel\n");
        } else{
            printf("indivisivel\n");
        }

    }

    return 0;
}
