#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor;

    printf("Entre com um valor qualquer: ");
    scanf("%f", &valor);

    printf("%f\n", valor);
    printf("%.2f\n", valor);
    printf("%.3f\n", valor);
    return 0;
}
