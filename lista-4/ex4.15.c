#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroArray[5];
    int segundoArray[5];
    int arrayInterseccao[5] = { 0 };
    int interseccoes = 0;
    int entrou = 0;

    printf("Forneca os valores do primeiro array: \n");
    for(int i = 0; i < 5; i++){
        printf("\tarray1[%d]: ", i);
        scanf("%d", &primeiroArray[i]);
    }

    printf("\nForneca os valores do segundo array: \n");
    for(int i = 0; i < 5; i++){
        printf("\tarray2[%d]: ", i);
        scanf("%d", &segundoArray[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(primeiroArray[i] == segundoArray[j]){
                for(int k = 0; k <= interseccoes; k++){
                    if(arrayInterseccao[k] == primeiroArray[i]){
                            break;
                    } else if(arrayInterseccao[k] != primeiroArray[i] && k == interseccoes){
                        arrayInterseccao[interseccoes] = primeiroArray[i];
                        entrou = 1;
                    }
                }
                if(entrou == 1){
                    interseccoes++;
                    entrou = 0;
                }
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d", arrayInterseccao[i]);
    }

    if(interseccoes == 0){
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
    } else {
        for(int i = 0; i < interseccoes; i++){
            printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
        }
    }

    return 0;
}
