#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int maiorNumero = 0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    printf("N4: ");
    scanf("%d", &n4);

    printf("N5: ");
    scanf("%d", &n5);

    // verificação de n1
    if(n1 > maiorNumero){
        maiorNumero = n1;
    }

    // verificação de n2
    if(n2 > maiorNumero){
        maiorNumero = n2;
    }

    // verificação de n3
    if(n3 > maiorNumero){
        maiorNumero = n3;
    }

    // verificação de n4
    if(n4 > maiorNumero){
        maiorNumero = n4;
    }

    // verificação de n5
    if(n5 > maiorNumero){
        maiorNumero = n5;
    }

    if(n1 <= 0 || n2 <= 0 || n3 <= 0 || n4 <= 0 || n5 <= 0){
        printf("Forneca apenas numeros positivos.");
    } else {
        for(int i = maiorNumero; i >= 1; i--){
            printf("\n%04d  ", i);
            if(n1 >= i){
                printf("*");
            } else {
                printf(" ");
            }
            if(n2 >= i){
                printf("*");
            } else {
                printf(" ");
            }
            if(n3 >= i){
                printf("*");
            } else {
                printf(" ");
            }
            if(n4 >= i){
                printf("*");
            } else {
                printf(" ");
            }
            if(n5 >= i){
                printf("*");
            } else {
                printf(" ");
            }
        }
    }

    return 0;
}
