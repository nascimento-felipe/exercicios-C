#include <stdio.h>
#include <stdlib.h>

int main() {
    int homem1;
    int homem2;
    int mulher1;
    int mulher2;

    printf("Idade Homem 1: ");
    scanf("%d", &homem1);

    printf("Idade Homem 2: ");
    scanf("%d", &homem2);

    printf("Idade Mulher 1: ");
    scanf("%d", &mulher1);

    printf("Idade Mulher 2: ");
    scanf("%d", &mulher2);

    if(homem1 > homem2){
        if(mulher1 > mulher2){
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem1 + mulher2);
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", homem2 * mulher1);
        } else {
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem1 + mulher1);
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", homem2 * mulher2);
        }
    } else {
        if(mulher1 > mulher2){
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem2 + mulher2);
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", homem1 * mulher1);
        } else {
            printf("Idade homem mais velho + idade mulher mais nova: %d\n", homem2 + mulher1);
            printf("Idade homem mais novo * idade mulher mais velha: %d\n", homem1 * mulher2);
        }
    }

    return 0;
}
