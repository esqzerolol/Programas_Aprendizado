#ifndef POLYHEADER_H
#define POLYHEADER_H

typedef struct polinomio {
    char ID[129];
    int max_expoente;
    double coef[129];
} Poly;

Poly *criar_termo(int num_termos, Poly *pg);
Poly *ler_polinomio(int num_termos, Poly *pg);
int maior_finder(int *pg);
char detect_oper(char *pg, int *pdivisor, int *size);
Poly *soma_polinomio(Poly *pg, char *V, int divisor, int tamanho, int num_poli);
Poly *sub_polinomio(Poly *pg, char *V, int divisor, int tamanho, int num_poli);
void divide_string(char *pg1, char *pg2, char *pe, int divisor, int tamanho);
void poli_print(Poly *pg);

#endif