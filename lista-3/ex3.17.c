#include <stdio.h>
#include <stdlib.h>

int main() {

    int termo;
    int fibonacci = 0;
    int termoF1 = 1;
    int termoF2 = 1;

    printf("Termo desejado: ");
    scanf("%d", &termo);

    printf("Fibonacci de %d e ", termo);

    if(termo == 0 || termo == 1){
        printf("%d", 1);
    } else {
        for(int i = 1; i < termo; i++){
            fibonacci = termoF1 + termoF2;
            termoF1 = termoF2;
            termoF2 = fibonacci;
        }
        printf("%d", fibonacci);
    }

    return 0;
}
