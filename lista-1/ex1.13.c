#include <stdio.h>
#include <stdlib.h>

int main() {

    float firstNumber;
    float secondNumber;
    float sum;
    float sub;
    float multi;
    float div;

    printf("Primeiro numero: ");
    scanf("%f", &firstNumber);

    printf("Segundo numero: ");
    scanf("%f", &secondNumber);

    sum = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    multi = firstNumber * secondNumber;
    div = firstNumber / secondNumber;

    // Saída da soma
    printf("%.2f + %.2f = %.2f\n", firstNumber, secondNumber, sum);
    printf("%.2f - %.2f = %.2f\n", firstNumber, secondNumber, sub);
    printf("%.2f * %.2f = %.2f\n", firstNumber, secondNumber, multi);
    printf("%.2f / %.2f = %.2f\n", firstNumber, secondNumber, div);

    return 0;
}
