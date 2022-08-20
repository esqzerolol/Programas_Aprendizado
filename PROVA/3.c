#include <stdio.h>

int main (){

    int dia, mes, ano, bissexto;
    scanf ("%d%d%d", &dia, &mes, &ano);

    if (dia == 0 || mes == 0 || ano == 0){
        printf ("DATAVA INVALIDA\n");
        return 0;
    }
    if (ano > 2036 || ano < 1900){
        printf ("DATA FORA DO INTERVALO ESTIPULADO\n");
        return 0;
    }
    else {
        if ((ano % 4) == 0){
        bissexto = 1;
            if ((ano % 100) == 0){
            bissexto = 0;
                if ((ano % 400) == 0){
                bissexto = 1;
                }
            }
        }
    
        if (mes == 2 && bissexto == 1){
            if (dia > 29){
                printf ("DATA INVALIDA\n");
                return 0;
            }
            else goto fim;
        }
        else if (mes == 2 && bissexto == 0){
            if (dia > 28){
                printf ("DATA INVALIDA\n");
                return 0;
            }
            else goto fim;
        }
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if (dia > 31){
                printf ("DATA INVALIDA\n");
                return 0;
            }
            else goto fim;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if (dia > 30){
                printf ("DATA INVALIDA\n");
                return 0;
            }
            else goto fim;
        }

        fim:
        printf ("%d/%d/%d", dia, mes, ano);
    }
    




    return 0;
}