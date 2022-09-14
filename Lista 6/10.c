#include <stdio.h>
#include <stdlib.h>

typedef struct termo_polinomio {
    double coeficiente;
    int expoente;
    int VERIFICADOR;
} termo;

termo *criar_termo(int num_termos);
termo *ler_polinomio(int num_termos);
void print_polinomio(termo *pg, int num_termos);
termo *soma_polinomio(termo *pg1, termo *pg2, termo *pr, int num_termos_1, int num_termos_2);
termo *sub_polinomio(termo *pg1, termo *pg2, termo *pr, int num_termos_1, int num_termos_2);


int main (){

    int num_testes, num_termos_n1, num_termos_n2, total;
    char operacao;
    int i, j;
    termo *pp1, *pp2, *ppr;
    

    scanf ("%d%*c", &num_testes);
    for (i = 0; i < num_testes; i++){
        scanf ("%c", &operacao);

        scanf ("%d", &num_termos_n1);
        pp1 = ler_polinomio(num_termos_n1);

        scanf ("%d", &num_termos_n2);
        pp2 = ler_polinomio(num_termos_n2);

        total = num_termos_n1 + num_termos_n2;
        ppr = criar_termo((total));
        
        if (operacao == '+'){
            soma_polinomio(pp1, pp2, ppr, num_termos_n1, num_termos_n2);
        }
        else if (operacao == '-'){
            sub_polinomio(pp1, pp2, ppr, num_termos_n1, num_termos_n2);
        }
        print_polinomio(ppr, total);
        free (pp1);
        free (pp2);
        free (ppr);
    }

    return 0;
}

termo *criar_termo(int num_termos){
    termo *pl;
    pl = (termo*) calloc (num_termos, sizeof(termo));   
    return pl;
}

termo *ler_polinomio(int num_termos){
    termo *pg;
    int i;
    pg = criar_termo(num_termos);
    for (i = 0; i < num_termos; i++){
        scanf ("%lf %d", &(pg+i)->coeficiente, &(pg+i)->expoente);
    }
    return pg;
}

void print_polinomio(termo *pg, int num_termos){
    int i;
    for (i = num_termos; i >= 0; i--){
        if ((pg+i)->expoente == 0 && (pg+i)->coeficiente != 0){
            printf ("+%.2lf", (pg+i)->coeficiente);
        }
        else if ((pg+i)->coeficiente > 0){
            printf ("+%.2lfX^%d", (pg+i)->coeficiente, (pg+i)->expoente);
        }
        else if ((pg+i)->coeficiente < 0){
            printf ("%.2lfX^%d", (pg+i)->coeficiente, (pg+i)->expoente);
        }
    } printf ("\n");
}

termo *soma_polinomio(termo *pg1, termo *pg2, termo *pr, int num_termos_1, int num_termos_2){
    int i, j;
    int check;
    int total = num_termos_1+num_termos_2;
    for (i = 0; i < total; i++){
        check = 0;
        for (j = total; j >= 0; j--){
            if ((pg1+i)->expoente == j && (pg1+i)->VERIFICADOR == 0) {
                (pr+j)->coeficiente += (pg1+i)->coeficiente;
                (pg1+i)->VERIFICADOR++;
                (pr+j)->expoente = j;
                check++;
            }
            if ((pg2+i)->expoente == j && (pg2+i)->VERIFICADOR == 0) {
                (pr+j)->coeficiente += (pg2+i)->coeficiente;
                (pg2+i)->VERIFICADOR++;
                (pr+j)->expoente = j;
                check++;
            }
            if (check == 2) break;
        }
    }
    return pr;
}

termo *sub_polinomio(termo *pg1, termo *pg2, termo *pr, int num_termos_1, int num_termos_2){
    int i, j;
    int check;
    int total = num_termos_1+num_termos_2;
    for (i = 0; i < total; i++){
        check = 0;
        for (j = total; j >= 0; j--){
            if ((pg1+i)->expoente == j && (pg1+i)->VERIFICADOR == 0) {
                (pr+j)->coeficiente -= (pg1+i)->coeficiente;
                (pg1+i)->VERIFICADOR++;
                (pr+j)->expoente = j;
                check++;
            }
            if ((pg2+i)->expoente == j && (pg2+i)->VERIFICADOR == 0) {
                (pr+j)->coeficiente -= (pg2+i)->coeficiente;
                (pg2+i)->VERIFICADOR++;
                (pr+j)->expoente = j;
                check++;
            }
            if (check == 2) break;
        }
    }
    return pr;
}