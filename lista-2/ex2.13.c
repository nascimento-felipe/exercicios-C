#include <stdio.h>
#include <stdlib.h>

int main() {
    float av1;
    float av2;
    float op;
    float media;

    printf("Nota Av. 1: ");
    scanf("%f", &av1);

    printf("Nota Av. 2: ");
    scanf("%f", &av2);

    printf("Nota Optativa: ");
    scanf("%f", &op);

   if(av1 >= av2 && op >= av2) {
        media = (av1 + op) / 2;
        printf("Media: %.2f", media);
   } else if(av1 >= av2 && av2 >= op) {
        media = (av1 + av2) / 2;
        printf("Media: %.2f", media);
   } else if(av2 >= av1 && op >= av1) {
        media = (av2 + op) / 2;
        printf("Media: %.2f", media);
   } else if(av2 >= av1 && av1 >= op) {
        media = (av2 + av1) / 2;
        printf("Media: %.2f", media);
   }

   if(media >= 6){
    printf("\nAprovado!");
   } else if(media >= 4 && media < 6){
    printf("\nExame.");
   } else if(media < 4){
    printf("\nReprovado...");
   }

    return 0;
}
