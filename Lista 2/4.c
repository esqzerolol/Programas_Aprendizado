#include <stdio.h>
 
int main (){
    
    double soma = 0;
    int var1, i;
    float var2;
    scanf ("%d", &var1);
    
    if (var1 < 1) {
        printf ("Numero invalido!");
        return 0;
    }

    for (i = 1; i <= var1; i++){
        var2 = (1.0 / i);
        soma += var2;
    }
    printf ("%.6lf\n", soma);
    
    
 
    return 0;
}