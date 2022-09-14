#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PolyHeader.h"

int main (){

    char oper;
    char buffer[256+1];
    int qtd_polinomios, qtd_operacoes;
    int i;
    int divisor, tamanho;
    int *pdivisor, *size;
    Poly *pp;
    pdivisor = &divisor;
    size = &tamanho;

    scanf ("%d%*c", &qtd_polinomios);
    pp = criar_termo(qtd_polinomios, pp);
    ler_polinomio(qtd_polinomios, pp);

    scanf ("%d%*c", &qtd_operacoes);
    for (i = 0; i < qtd_operacoes; i++){
        memset (buffer, '\0', sizeof(buffer));
        scanf ("%[^\n]%*c", buffer);
        oper = detect_oper(buffer, pdivisor, size);
        switch (oper){
            case '+':
            soma_polinomio(pp, buffer, divisor, tamanho, qtd_polinomios);
            break;
            case '-':
            sub_polinomio(pp, buffer, divisor, tamanho, qtd_polinomios);
            break;
        }
    }
    return 0;
}