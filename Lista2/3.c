#include <stdio.h>
 
int main (){
 
    int var1, var2;
    int i;
    scanf ("%d%d", &var1, &var2);
    if (var1 % 2 == 0){
        for (i = 0; i < var2; i++){
            printf ("%d ", var1);
            var1 += 2;
        }
    }
    else printf ("O PRIMEIRO NUMERO NAO E PAR\n");
    
    return 0;
}