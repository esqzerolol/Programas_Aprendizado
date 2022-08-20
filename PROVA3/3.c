#include <stdio.h>
#include <limits.h>

int main (){

    int linha, coluna;
    int pos_i_maior, pos_j_maior, pos_i_menor, pos_j_menor;
    int maior = INT_MIN, menor = INT_MAX;
    int i, j;

    scanf ("%d %d", &linha, &coluna);
    int M[linha][coluna];

    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            scanf ("%d", &M[i][j]);
        }
    }

     for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            if (M[i][j] > maior){
                maior = M[i][j];
                pos_i_maior = i;
                pos_j_maior = j;
            }
            if (M[i][j] < menor){
                menor = M[i][j];
                pos_i_menor = i;
                pos_j_menor = j;
            }
        }
     }

    M[pos_i_menor][pos_j_menor] = maior;
    M[pos_i_maior][pos_j_maior] = menor;

    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            printf ("%d ", M[i][j]);
        }
        printf ("\n");
    } 



    return 0;
}