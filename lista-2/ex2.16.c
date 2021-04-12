#include <stdio.h>
#include <stdlib.h>

// seguinte, eu do futuro:
// divisão com numero tipo int dá resultado inteiro, ou seja, 1256 / 1000 == 1,256 e retorna o 1 só.
// então a ideia é pegar o valor e ir diminuindo pra saber a quantidade de valores nas casas de milhar,
// centena, dezena e unidade. daí depois disso é com vc, tenta pegar os valores de 1 até 9 e passar pro char, dezena tb e tals.

int main() {
    int num;
    int numQuebrado;
    int uni = 0;
    int dez = 0;
    int cen = 0;
    int mil = 0;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &num);

    numQuebrado = num;

    if(numQuebrado >= 1 && numQuebrado <= 3999){
        if(numQuebrado / 1000 >= 1){
            mil = numQuebrado / 1000;
            numQuebrado = numQuebrado % 1000;
        }
        if(numQuebrado / 100 >= 1){
            cen = numQuebrado / 100;
            numQuebrado = numQuebrado % 100;
        }
        if(numQuebrado / 10 >= 1){
            dez = numQuebrado / 10;
            numQuebrado = numQuebrado % 10;
        }

        uni = numQuebrado;
        printf("%d = ", num);
    } else {
        printf("Numero incorreto!");
    }


    if(mil >= 1 && mil < 4){
        if(mil == 1){
            printf("M");
        } else if(mil == 2){
            printf("MM");
        } else if(mil == 3){
            printf("MMM");
        }
    }
    if(cen >= 1){
        if(cen < 5){
            if(cen == 1){
                printf("C");
            } else if(cen == 2){
                printf("CC");
            } else if(cen == 3){
                printf("CCC");
            } else if(cen == 4){
                printf("CD");
            }
        } else if (cen >= 5){
            if(cen == 5){
                printf("D");
            } else if(cen == 6){
                printf("DC");
            } else if(cen == 7){
                printf("DCC");
            } else if(cen == 8){
                printf("CCM");
            } else if(cen == 9){
                printf("CM");
            }
        }
    }
    if(dez >= 1){
        if(dez < 5){
            if(dez == 1){
                printf("X");
            } else if(dez == 2){
                printf("XX");
            } else if(dez == 3){
                printf("XXX");
            } else if(dez == 4){
                printf("XL");
            }
        } else if(dez >= 5){
            if(dez == 5){
                printf("L");
            } else if(dez == 6){
                printf("LX");
            } else if(dez == 7){
                printf("LXX");
            } else if(dez == 8){
                printf("XXC");
            } else if(dez == 9){
                printf("XC");
            }

        }
    }
    if(uni >= 1){
        if(uni < 5){
            if(uni == 1){
                printf("I");
            } else if(uni == 2){
                printf("II");
            } else if(uni == 3){
                printf("III");
            } else if(uni == 4){
                printf("IV");
            }
        } else if(uni >= 5){
            if(uni == 5){
                printf("V");
            } else if(uni == 6){
                printf("VI");
            } else if(uni == 7){
                printf("VII");
            } else if(uni == 8){
                printf("IIX");
            } else if(uni == 9){
                printf("IX");
            }
        }
    }
    return 0;
}
