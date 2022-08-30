#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int a = 100;
    char V[50];
    int i;

    sprintf (V, "%d", a);

    for (i = 0; i < 3; i++) printf ("%c\n", V[i]);

    return 0;
}