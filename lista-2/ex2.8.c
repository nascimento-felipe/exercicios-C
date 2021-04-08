#include <stdio.h>
#include <stdlib.h>

int main() {
    float pn;
    float sn;
    float tn;

    printf("N1: ");
    scanf("%f", &pn);

    printf("N2: ");
    scanf("%f", &sn);

    printf("N3: ");
    scanf("%f", &tn);

    if(pn >= sn && pn >= tn && sn >= tn){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", pn + sn);
    } else if(pn >= sn && pn >= tn && tn >= sn){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", pn + tn);
    }

    else if(sn >= pn && sn >= tn && pn >= tn){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", sn + pn);
    } else if(sn >= pn && sn >= tn && tn >= pn) {
        printf("A soma dos dois numeros maiores fornecidos e %.2f", sn + tn);
    }

    else if(tn >= pn && tn >= sn && pn >= sn){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", tn + pn);
    } else if(tn >= pn && tn >= sn && sn >= pn){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", tn + sn);
    }

    return 0;
}
