#include <stdio.h>
#include <stdlib.h>

typedef struct lista_alunos{
    int matricula;
    int dia;
    int mes;
    int ano;
    char nome[201];
    int dias_vividos;
} alunos;

alunos *criar_alunos(int num);
void swap(int* xp, int* yp);
void bubbleSort(int arr[], int n);


int main (){

    int num_alunos, novinho;
    int i, j;
    alunos *pa;
    scanf ("%d", &num_alunos);
    int DIAS[num_alunos];
    pa = criar_alunos(num_alunos);
    for (i = 0; i < num_alunos; i++){
        scanf ("%d", &(pa+i)->matricula);
        scanf ("%d", &(pa+i)->dia);
        scanf ("%d", &(pa+i)->mes);
        scanf ("%d%*c", &(pa+i)->ano);
        scanf ("%[^\n]%*c", (pa+i)->nome);
    }
    for (i = 0; i < num_alunos; i++){
        (pa+i)->dias_vividos = ((2050-(pa+i)->ano)*365.25) + (((12-(pa+i)->mes)*365.25)/12) + (31-(pa+i)->dia);
        DIAS[i] = (pa+i)->dias_vividos;
    }

    bubbleSort(DIAS, sizeof(DIAS) / sizeof(DIAS[0]));

    for (i = 0; i < num_alunos; i++){
        for (j = 0; j < num_alunos; j++){
            if (DIAS[i] == (pa+j)->dias_vividos){
                printf ("Matric.: %d ", (pa+j)->matricula);
                printf ("Nome: %s ", (pa+j)->nome);
                printf ("Data Nasc: %d/%d/%d\n", (pa+j)->dia, (pa+j)->mes, (pa+j)->ano);
            }
        }
    } 

        
    free(pa);
    return 0;
}

alunos *criar_alunos(int num){
    alunos *pl;
    int qtd_alunos = num;
    pl = (alunos*) malloc (qtd_alunos * sizeof(alunos));   
    return pl;
}

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}