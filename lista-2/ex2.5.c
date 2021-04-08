#include <stdio.h>
#include <stdlib.h>

int main() {
    int pn;
    int sn;
    int tn;

    printf("N1: ");
    scanf("%d", &pn);

    printf("N2: ");
    scanf("%d", &sn);

    printf("N3: ");
    scanf("%d", &tn);

    if(pn >= sn && pn >= tn && sn >= tn){
        printf("%d >= %d >= %d", pn, sn, tn);
    } else if(pn >= sn && pn >= tn && tn >= sn){
        printf("%d >= %d >= %d", pn, tn, sn);
    }

    else if(sn >= pn && sn >= tn && pn >= tn) {
        printf("%d >= %d >= %d", sn, pn, tn);
    } else if(sn >= pn && sn >= tn && tn >= pn) {
        printf("%d >= %d >= %d", sn, tn, pn);
    }

    else if(tn >= sn && tn >= pn && sn >= pn) {
        printf("%d >= %d >= %d", tn, sn, pn);
    } else if(tn >= sn && tn >= pn && pn >= sn){
        printf("%d >= %d >= %d", tn, pn, sn);
    }

    return 0;
}
