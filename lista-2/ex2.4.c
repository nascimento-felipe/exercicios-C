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

    if(pn >= sn && pn >= tn && sn >= tn) {
            printf("%d <= %d <= %d", tn, sn, pn);
        } else if(pn >= sn && pn >= tn && tn >= sn){
            printf("%d <= %d <= %d", sn, tn, pn);
        }

        else if(sn >= pn && sn >= tn && pn >= tn){
            printf("%d <= %d <= %d", tn, pn, sn);
        } else if(sn >= pn && sn >= tn && tn >= pn) {
            printf("%d <= %d <= %d", pn, tn, sn);
        }

        else if(tn >= pn && tn >= sn && pn >= sn){
            printf("%d <= %d <= %d", sn, pn, tn);
        } else if(tn >= pn && tn >= sn && sn >= pn){
            printf("%d <= %d <= %d",pn, sn, tn);
        }

    return 0;
}
