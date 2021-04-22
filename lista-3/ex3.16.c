#include <stdio.h>
#include <stdlib.h>

int main() {

    int termo1 = 1;
    int termo2 = 1;
    int soma = 0;

    printf("%d %d", termo1, termo2);

    for(int i = 0; i < 18; i++){
        soma = termo1 + termo2;
        termo1 = termo2;
        termo2 = soma;
        printf(" %d", soma);
    }

    return 0;
}
