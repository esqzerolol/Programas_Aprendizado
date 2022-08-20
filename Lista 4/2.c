#include <stdio.h>

int main (){

    int num, num2;
    int i, j, cont = 0;

    //
    while (1){
        scanf ("%d", &num);
        if (num <= 0);
        else break;
    }
    //

    int V[num];
    for (i = 0; i < num; i++) scanf ("%d", &V[i]);

    scanf ("%d", &num2);
    for (j = 0; j < num; j++){
        if (num2 <= V[j]) cont++;
    }
    
    printf ("%d\n", cont);

    
    
    return 0;
}