#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65){
        printf("Eleitor obrigatorio.");
    } else if(idade >= 16 && idade < 18 || idade > 65){
        printf("Eleitor facultativo.");
    } else {
        printf("Nao eleitor.");
    }
    return 0;
}
