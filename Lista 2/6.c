#include <stdio.h>

int main (){

    int num1, var1, temp, temp2 = 0;
    int i = 0, k = 0;


    scanf ("%d", &num1);
    temp = var1;
    while (i < num1){
        scanf ("%d", &var1);
        if (var1 > temp){
            k++;
        }
        else k = 1;
        if (k > temp2) temp2 = k;
        temp = var1;
        i++;
    }

    printf ("O comprimento do segmento crescente maximo e: %d\n", temp2);

    return 0;
}