#include <stdio.h>
 
int main (){
 
    int var1;
    int i = 1;
    scanf ("%d", &var1);
 

    do {
        if (i % 2 == 0){
            printf ("%d^2 = %d\n", i, i*i);
        }
        i ++;
    } while (var1 >= i);
 
    return 0;
}