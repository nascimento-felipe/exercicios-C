#include <stdio.h>
#include <stdlib.h>

int main() {
    // declaracao das vari�veis
    int firstNumber;
    int secondNumber;
    int sum;
    int sub;
    int multi;
    int div;

    //primeiro n�mero � pedido
    printf("Primeiro numero: ");
    scanf("%d", &firstNumber);

    // segundo n�mero � pedido
    printf("Segundo numero: ");
    scanf("%d", &secondNumber);

    // resultado das opera��es
    sum = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    multi = firstNumber * secondNumber;
    div = firstNumber / secondNumber;

    //sa�da dos resultados
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    printf("%d - %d = %d\n", firstNumber, secondNumber, sub);
    printf("%d * %d = %d\n", firstNumber, secondNumber, multi);
    printf("%d / %d = %d", firstNumber, secondNumber, div);
    return 0;
}
