#include <stdio.h>

int main (){

    float renda, per_capita;
    int ensino, etnia, quantidade, cota;
    scanf ("%f %d %d %d", &renda, &quantidade, &ensino, &etnia);

    per_capita = (renda / quantidade);


    if      (ensino == 2 && per_capita <= (937.00 * 2)){

        if (etnia == 4) printf ("ALUNO COTISTA (L1)\n");
        else            printf ("ALUNO COTISTA (L2)\n");
    }
    else if (ensino == 2){

        if (etnia == 4) printf ("ALUNO COTISTA (L3)\n");
        else            printf ("ALUNO COTISTA (L4)\n");
    }
    else                printf ("ALUNO NAO COTISTA\n");

    return 0;
}