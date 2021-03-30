#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorAula;
    int quantidadeAulas;
    float porcentagemInss;
    float salarioBruto;
    float salarioLiquido;

    printf("Valor da hora/aula: ");
    scanf("%f", &valorAula);

    printf("Quantidade de aulas: ");
    scanf("%d", &quantidadeAulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &porcentagemInss);

    salarioBruto = valorAula * quantidadeAulas;
    salarioLiquido = salarioBruto - (salarioBruto * (porcentagemInss / 100));

    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}
