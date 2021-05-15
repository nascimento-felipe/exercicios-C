/*
    Arquivo: ex7.3.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>

int maiorNumero( float n1, float n2 );

int main() {

    float n1[5] = { 0 };
    float n2[5] = { 0 };
    float resultado;

    // entrada dos arrays
    for(int i = 0; i < 5; i++){

        // entrada dos numeros no n1
        do{
            printf("n1[%d]: ", i);
            scanf("%f", &n1[i]);

            if(n1[i] < 0){
                printf("Entre com um valor positivo!\n");
            }

        }while(n1[i] < 0);

        // entrada dos numeros no n2
        do{
            printf("n2[%d]: ", i);
            scanf("%f", &n2[i]);

            if(n2[i] < 0){
                printf("Entre com um valor positivo!\n");
            }

        }while(n2[i] < 0);
    }

    // 2 \n pra ficar melhor de enxergar o resultado
    printf("\n\n");

    // saída
    for(int i = 0; i < 5; i++){
        printf("%.2f, %.2f: ", n1[i], n2[i]);

        resultado = maiorNumero(n1[i], n2[i]);

        if(resultado == -1){
            printf("Eles sao iguais\n");
        } else {
            printf("O maior valor e %.2f\n", resultado);
        }
    }

    return 0;
}

int maiorNumero(float n1, float n2) {

    if(n1 == n2){
        return -1;
    } else if(n1 > n2){
        return n1;
    } else {
        return n2;
    }

}
