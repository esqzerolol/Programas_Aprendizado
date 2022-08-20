#include <stdio.h>
 
int main (){
 
    int repeticao;
    int contador;
    double F, C;
    scanf("%d", &repeticao);
 
    for (contador=0;contador<repeticao;contador++){
        scanf("%lf", &F);
        C = 5 * (F - 32) / 9;
        printf ("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
    }
 
    return 0;
}