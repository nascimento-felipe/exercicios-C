#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorProduto;
    float valorComDesconto;
    char simbolo = '%';

    printf("Valor do produto: ");
    scanf("%f", &valorProduto);

    valorComDesconto = valorProduto * 0.91;

    printf("Preco de venda com 9%c de desconto: %.2f", simbolo, valorComDesconto);

    return 0;
}
