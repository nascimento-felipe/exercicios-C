#include <stdio.h>
#include <stdlib.h>

int main() {
    // declaracao das variáveis
    int firstNumber;
    int secondNumber;
    int sum;
    int sub;
    int multi;
    int div;

    //primeiro número é pedido
    printf("Primeiro numero: ");
    scanf("%d", &firstNumber);

    // segundo número é pedido
    printf("Segundo numero: ");
    scanf("%d", &secondNumber);

    // resultado das operações
    sum = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    multi = firstNumber * secondNumber;
    div = firstNumber / secondNumber;

    //saída dos resultados
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    printf("%d - %d = %d\n", firstNumber, secondNumber, sub);
    printf("%d * %d = %d\n", firstNumber, secondNumber, multi);
    printf("%d / %d = %d", firstNumber, secondNumber, div);
    return 0;
}
