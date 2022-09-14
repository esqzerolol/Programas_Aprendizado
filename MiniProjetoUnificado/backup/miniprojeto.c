#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct polinomio {
    char ID[129];
    int max_expoente;
    double coef[129];
} Poly;

Poly *criar_termo(int num_termos, Poly *pg){
    pg = (Poly*) calloc (num_termos, sizeof(Poly));   
    return pg;
}

int maior_finder(int *pg){
    int fe_em_deus = 0;
    int maior = 0;
    int i;
    for (i = 0; i < 101; i++){
        if (fe_em_deus > 15) break;
        if (pg[i] > maior) {
            fe_em_deus++;
            maior = pg[i];
        }
    }
    return maior;
}

Poly *ler_polinomio(int num_termos, Poly *pg){
    char buffer[1001];
    char coef[101];
    char expo[101];
    int Expoentes[101];
    int valor;
    int c, i, j, k, l, m, n;

    for (c = 0; c < num_termos; c++){
        memset (buffer, '\0', sizeof(buffer));
        scanf ("%[^\':']%*c", (pg+c)->ID);
        scanf ("%[^\n]%*c", buffer);
        j = k = l = m = n = 0;
        memset (coef, '\0', sizeof(coef));
        memset (expo, '\0', sizeof(expo));
        memset (Expoentes, 0, sizeof(Expoentes));
        for (i = 0; buffer[i] != '\0'; i++){
            if (buffer[i] != 'x'){
                coef[j] = buffer[i];
                j++;
            }
            else{
                k++;
                l++;
                for (l = i+2; buffer[l] >= '0' && buffer[l] <= '9'; l++, m++){
                    expo[m] = buffer[l];
                    Expoentes[n] = atof(expo);
                }
                valor = atof(expo);
                (pg+c)->coef[valor] = atof(coef);
                memset (coef, '\0', sizeof(coef));
                memset (expo, '\0', sizeof(expo));
                n++;
                i += 1+m;
                j = k = l = m = valor = 0;
            }
        }
        (pg+c)->max_expoente = maior_finder(Expoentes);
    }   
}

char detect_oper(char *pg, int *pdivisor, int *size){
    int i;
    int tamanho = strlen(pg);
    for (i = 0; pg[i] != '\0'; i++); *size = i;
    for (i = 0; i <= tamanho; i++){
        switch (pg[i])
        {
        case '+':
            *pdivisor = i;
            return '+';
        
        case '-':
            *pdivisor = i;
            return '-';
        }
    }
}

Poly *soma_polinomio(Poly *pg, char *V, int divisor, int tamanho, int num_poli){
    char esquerda[128+1], direita[128+1];
    int i, j;
    Poly *resultado;
    resultado = criar_termo(1, resultado);
    memset(esquerda, '\0', sizeof(esquerda));
    memset(direita, '\0', sizeof(direita));
    divide_string(esquerda, direita, V, divisor, tamanho);
    for (i = 0; i < num_poli; i++){
        if (strcmp((pg+i)->ID, esquerda) == 0){
            for (j = 0; j <= (pg+i)->max_expoente; j++){
                resultado->coef[j] += (pg+i)->coef[j];
            }
            resultado->max_expoente = (pg+i)->max_expoente;
            break;
        }
    }
    for (i = 0; i < num_poli; i++){
        if (strcmp((pg+i)->ID, direita) == 0){
            for (j = 0; j <= (pg+i)->max_expoente; j++){
                resultado->coef[j] += (pg+i)->coef[j];
            }
            if (resultado->max_expoente < (pg+i)->max_expoente)
                resultado->max_expoente = (pg+i)->max_expoente;
        }
    }
    poli_print(resultado);
    free (resultado);
}

Poly *sub_polinomio(Poly *pg, char *V, int divisor, int tamanho, int num_poli){
    char esquerda[128+1], direita[128+1];
    int i, j;
    Poly *resultado;
    resultado = criar_termo(1, resultado);
    memset(esquerda, '\0', sizeof(esquerda));
    memset(direita, '\0', sizeof(direita));
    divide_string(esquerda, direita, V, divisor, tamanho);
    for (i = 0; i < num_poli; i++){
        if (strcmp((pg+i)->ID, esquerda) == 0){
            for (j = 0; j <= (pg+i)->max_expoente; j++){
                resultado->coef[j] += (pg+i)->coef[j];
            }
            resultado->max_expoente = (pg+i)->max_expoente;
            break;
        }
    }
    for (i = 0; i < num_poli; i++){
        if (strcmp((pg+i)->ID, direita) == 0){
            for (j = 0; j <= (pg+i)->max_expoente; j++){
                resultado->coef[j] -= (pg+i)->coef[j];
            }
            if (resultado->max_expoente < (pg+i)->max_expoente)
                resultado->max_expoente = (pg+i)->max_expoente;
        }
    }
    poli_print(resultado);
}

void divide_string(char *pg1, char *pg2, char *pe, int divisor, int tamanho){
    int i, j;
    j = 0;
    for (i = 0; i <= tamanho; i++){
        if (i < divisor && pe[i] != ' ') {
            pg1[i] = pe[i];
        }
        else if (i > divisor && pe[i] != ' ') {
            pg2[j] = pe[i];
            j++;
        }
    }
}

void poli_print(Poly *pg){
    int i;
    int primeiro_check = 0;
    for (i = 0; i <= pg->max_expoente; i++){
        if (!pg->coef[i] == 0 && primeiro_check == 0){
            printf ("%gx^%d", pg->coef[i], i);
            primeiro_check++;
        }
        else if (!pg->coef[i] == 0 && primeiro_check != 0){
            printf ("%+gx^%d", pg->coef[i], i);
            primeiro_check++;
        } 
    } printf ("\n");
}

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