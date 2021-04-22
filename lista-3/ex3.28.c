#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldoInicial;
    float saldoFinal;
    float depositoAtual;
    float retiradaAtual;
    int operacaoDesejada;
    int sair = 0;

    printf("Saldo inicial: ");
    scanf("%f", &saldoInicial);

    saldoFinal = saldoInicial;

    printf("Operacoes:\n");
    printf("\t1) Deposito;\n");
    printf("\t2) Saque;\n");
    printf("\t3) Fim.\n");

    do{
        printf("Operacao Desejada: ");
        scanf("%d", &operacaoDesejada);

        switch(operacaoDesejada){
        case 1:
            printf("Valor a depositar: ");
            scanf("%f", &depositoAtual);
            saldoFinal += depositoAtual;
            break;
        case 2:
            printf("Valor a sacar: ");
            scanf("%f", &retiradaAtual);
            saldoFinal -= retiradaAtual;
            break;
        case 3:
            sair = 1;
            break;
        default:
            printf("Operacao Invalida.\n");
            break;
        }

    }while(sair != 1);

    if(saldoFinal < 0){
        saldoFinal *= -1;
        printf("Saldo final: -R$%.2f\n", saldoFinal);
        printf("Conta devedora.");
    } else if(saldoFinal == 0){
        printf("Saldo final: R$%.2f\n", saldoFinal);
        printf("Sem saldo.");
    } else {
        printf("Saldo final: R$%.2f\n", saldoFinal);
        printf("Conta preferencial.");
    }

    return 0;
}
