#include <stdio.h>

int main (){

    int num;
    int i, j;
    int maior, menor;
    
    //
    scanf ("%d", &num);
    int V[num], Vi[num];
    for (i = 0; i < num; i++) scanf ("%d", &V[i]);
    //
 
    maior = V[i-num];
    menor = V[i-num];
    i--;

    for (j = 0; i >= 0; i--){
        if (V[j] >= maior) maior = V[j];
        if (V[j] <= menor) menor = V[j];
        Vi[j] = V[i];
        j++;
        }
    for (i = 0; i < num; i++){
        printf ("%d ", V[i]);
    }
    printf ("\n");
    for (i = 0; i < num; i++){
        printf ("%d ", Vi[i]);
    }

    printf ("\n%d\n%d\n", maior, menor);
    
    return 0;
}