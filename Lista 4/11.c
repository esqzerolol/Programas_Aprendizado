#include <stdio.h>

int main (){

    int num, temp;
    int i, j;
    double mediana;

    //
    scanf ("%d", &num);
    int V[num];
    for (i = 0; i < num; i++) scanf ("%d", &V[i]);
    //

    for (i = 0; i < num - 1; i++){
        for (j = 0; j < num - i - 1; j++){
            if (V[j] > V[j + 1]){
                temp = V[j];
                V[j] = V[j+1];
                V[j+1] = temp;
            }
        }
    }

    if ((num % 2) == 0){
        num = num/2;
        mediana = ((V[num] + V[num-1]) / 2.0);
    }
    else mediana = V[num/2];
    
    printf ("%.2lf\n", mediana);

    return 0;
}