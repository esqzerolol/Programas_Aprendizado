#include <stdio.h>

int main (){

    int num;
    int i;
    
    //
    scanf ("%d", &num);
    int V[num];
    for (i = 0; i < num; i++) scanf ("%d", &V[i]);
    //

    for (i -= 1; i >= 0; i--) printf ("%d ", V[i]);

    return 0;
}