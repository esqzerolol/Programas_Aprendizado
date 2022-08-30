#include <stdio.h>
#include <limits.h>

int main (){

    int num;
    int KmT = 0;
    int i, j;
    int CIDADES[6][6] = {{0, 63, 210, 190, INT_MAX, 190}, //Cárceres
                         {63, 0, 160, 150, 95, 10},       //Bugres
                         {210, 160, 0, 10, 1, 10},        //Cuiabá
                         {190, 150, 10, 0, 10, 20},       //Várzea
                         {10, 95, 7, 21, 0, 80},          //Tangará
                         {190, 2, INT_MAX, 41, 80, 0}};      //Lacerda

    scanf ("%d", &num);
    int ROTAS[num];
    for (i = 0; i < num; i++) scanf ("%d", &ROTAS[i]);

    for (i = 0; i < num-1; i++){
        for (j = 0; j < 6; j++){
            if (ROTAS[i] == j){
                if (CIDADES[j][ROTAS[i+1]] == INT_MAX) {
                    printf ("rota invalida!\n");
                    return 0;
                }
                else KmT += CIDADES[j][ROTAS[i+1]];
            }
        }
    }

    printf ("%d\n", KmT);

    return 0;
}