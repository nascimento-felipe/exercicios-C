/*
    Arquivo: ex9.20.c
    Autor: Felipe de Andrade Nascimento
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool contem(const char *fonte, const char *aPesquisar);

int main() {

    char frase[41];
    char pesquisar[41];

    // entrada da string e da string a pesquisar
    printf("String fonte: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("String a pesquisar: ");
    fgets(pesquisar, 41, stdin);
    pesquisar[strlen(pesquisar) - 1] = '\0';

    // verificação de condição e saída
    if(contem(frase, pesquisar)){
        printf("\n\n\"%s\" esta contida em \"%s\"", pesquisar, frase);
    } else {
        printf("\n\n\"%s\" nao esta contida em \"%s\"", pesquisar, frase);
    }

    return 0;
}

bool contem(const char *fonte, const char *aPesquisar) {

    // variável para comparar as strings no final
    char pedacoFrase[41] = " ";

    for(int i = 0; i < strlen(fonte); i++){

        // se o algarismo da fonte for igual ao da palavra aPesquisar
        // o programa inicia uma var. a para andar o array de aPesquisar
        if(fonte[i] == aPesquisar[0]){
            int a = 1;
            pedacoFrase[0] = fonte[i];

            // o pedacoFrase pega o algarismo já verificado da fonte
            // e o for serve para rodar o próximo algarismo da fonte,
            // enquanto o a percorre o de pesquisa.
            for(int j = i + 1; j < strlen(fonte); j++){

                // então, se os algarismos forem iguais, o pedacoFrase
                // recebe ele na mesma posição do aPesquisar e 'a' recebe
                // mais um valor, indo para o próximo índice do array
                if(aPesquisar[a] == fonte[j]){
                    pedacoFrase[a] = fonte[j];
                    a++;
                }
                // caso o aPesquisar no índice 'a' chegue ao final
                // quer dizer que o pedacoFrase está completo e
                // sai do if e do for.
                else if(aPesquisar[a] == '\0'){
                    break;
                } else {
                    pedacoFrase[0] = '\0';
                    break;
                }
            }
        }

    }

    // no final, ele compara a string montada com
    // a recebida como argumento e, se forem iguais,
    // retorna true.
    if(strcmp(pedacoFrase, aPesquisar) != 0){
        return false;
    } else {
        return true;
    }

}
