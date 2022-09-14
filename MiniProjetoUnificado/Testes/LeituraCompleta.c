#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct polinomio {
    char ID[129];
    int max_expoente;
    double coef[129];
} Poly;

Poly *criar_termo(int num_termos, Poly *pg);
Poly *ler_polinomio(int num_termos, Poly *pg);
int maior_finder(int *pg);

int main (){

    int num_polinomios;
    int i;
    Poly *pp;  

    scanf ("%d%*c", &num_polinomios);
    pp = criar_termo(num_polinomios, pp);
    ler_polinomio(num_polinomios, pp);

    return 0;
}

Poly *criar_termo(int num_termos, Poly *pg){
    pg = (Poly*) calloc (num_termos, sizeof(Poly));   
    return pg;
}

int maior_finder(int *pg){
    int maior = 0;
    int i;
    for (i = 0; i < sizeof(pg)/sizeof(pg[0]); i++){
        if (pg[i] > maior) maior = pg[i];
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
    }   
}
