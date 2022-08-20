#include <stdio.h>

int main (){

    int qtd_notas, vlr_notas, vlr_ult_nota, maior, pos_maior;
    int i, j;
    int qtd_ult_nota = 0, check = 0;

    //
    scanf ("%d", &qtd_notas);
    int V[qtd_notas];
    for (i = 0; i < qtd_notas; i++){
        while (1){
            scanf ("%d", &vlr_notas);
            if (vlr_notas >= 0 && vlr_notas <= 10){
                V[i] = vlr_notas;
                if (vlr_notas > maior ) maior = vlr_notas;
                break;
            }
            
        }
    }
    //
    i--;
    vlr_ult_nota = V[i];

    for (j = 0; j <= (i); j++){
        if (V[j] == vlr_ult_nota) qtd_ult_nota++;
        if (V[j] == maior && check != 1) {
            pos_maior = j; 
            check = 1;
        }
    }
    printf ("Nota %d, %d vezes\n", vlr_ult_nota, qtd_ult_nota);
    printf ("Nota %d, indice %d\n", maior, pos_maior);


    return 0;
}