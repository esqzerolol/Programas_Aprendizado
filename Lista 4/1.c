#include <stdio.h>

int main (){

    int num, teste, g;
    int i, c, j;
    
    //
    scanf ("%d", &num);
    int V[num];
    for (j = 0; j < num; j++) scanf ("%d", &V[j]);
    //

    scanf ("%d", &num);
    for (i = 0; i < num; i++){
        scanf ("%d", &teste);
        for (c = 0; c < j ; c++){
            if (V[c] == teste) {
                g = 1;
                break;
            }
            else if (c == j) {
                g = 0;
                break;
            }
        }
        if (g == 1) printf ("ACHEI\n");
        else if (g == 0) printf ("NAO ACHEI\n");
        c = 0;
        g = 0;
    }
    return 0;
}