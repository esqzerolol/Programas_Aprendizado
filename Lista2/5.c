#include <stdio.h>
 
int main (){
 
    unsigned long int fatorial = 1;
    int num;
    int k;
 
    scanf ("%d", &num);
    for (k=1; k <= num; k++) {
        fatorial *= k;
    }
 
    printf ("%d! = %lu\n", num, fatorial);
 
    return 0;
}