#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiroNumero;
    int segundoNumero;
    int multiplosDois = 0;
    int multiplosTres = 0;
    int multiplosQuatro = 0;

    printf("N1: ");
    scanf("%d", &primeiroNumero);

    printf("N2: ");
    scanf("%d", &segundoNumero);

    if(primeiroNumero >= segundoNumero){
        for(int i = segundoNumero; i <= primeiroNumero; i++){
            if(i % 2 == 0){
                multiplosDois++;
            } if(i % 3 == 0){
                multiplosTres++;
            } if(i % 4 == 0){
                multiplosQuatro++;
            }
        }

    } else {
        for(int i = primeiroNumero; i <= segundoNumero; i++){
            if(i % 2 == 0){
                multiplosDois++;
            } if(i % 3 == 0){
                multiplosTres++;
            } if(i % 4 == 0) {
                multiplosQuatro++;
            }
        }
    }


    printf("Multiplos de 2: %d\n", multiplosDois);
    printf("Multiplos de 3: %d\n", multiplosTres);
    printf("Multiplos de 4: %d", multiplosQuatro);

    return 0;
}
