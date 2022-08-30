#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h> 

struct data {
    int dia;
    int mes;
    int ano;      
};

void data_print (struct data d);

int main (){

    while (1){
        sleep(1);
        srand(time(0));
        struct data Samuel, Pedro;
        Samuel.ano = rand() % 2022;
        Samuel.mes = rand() % 12;
        Samuel.dia = rand() % 30;
        data_print (Samuel);
    }
    return 0;
}

void data_print (struct data d){
    printf ("%d/%d/%d\n", d.dia, d.mes, d.ano);
}