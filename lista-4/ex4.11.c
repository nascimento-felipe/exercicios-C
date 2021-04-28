#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[10] = {0};
    int quantidade = 0;
    int valorInserir;

    do{
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", &quantidade);

        if(quantidade > 9 || quantidade < 0){
            printf("Quantidade incorreta, forneca novamente!\n");
        }

    }while(quantidade <= 1 || quantidade >= 9);


    for(int i = 0; i < quantidade; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Valor que sera inserido: ");
    scanf("%d", &valorInserir);

    for(int i = quantidade; i >= 0; i--){
        array[i+1] = array[i];

        if(i == 0){
            array[0] = valorInserir;
        }
    }

    for(int i = 0; i < quantidade + 1; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}