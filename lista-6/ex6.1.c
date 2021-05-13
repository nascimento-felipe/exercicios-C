/*
    Arquivo: ex6.1.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;
    int b;
    int c;
    float delta;
    float x1;
    float x2;

    // entrada do A
    printf("a: ");
    scanf("%d", &a);

    // entrada do B
    printf("b: ");
    scanf("%d", &b);

    // entrada do C
    printf("c: ");
    scanf("%d", &c);

    if(a == 0){
        printf("Nao existe equacao do segundo grau!");
    } else {
        delta = pow(b, 2) - (4 * a * c);

            printf("Delta: %.2f\n", delta);
        if(delta < 0){
            printf("S = {}");
        } else if(delta == 0){
            x1 = ((-b) + sqrt(delta) ) / 2 * a;
            printf("S = {%.2f}", x1);
        } else {
            x1 = ((-b) + sqrt(delta)) / 2 * a;
            x2 = ((-b) - sqrt(delta)) / 2* a;
            if(x1 > x2){
                printf("S = {%.2f, %.2f}", x2, x1);
            } else {
                printf("S = {%.2f, %.2f}", x1, x2);
            }
        }
    }

    return 0;
}
