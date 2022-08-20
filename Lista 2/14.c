#include <stdio.h>
 
int main (){
 
    int entrada, perfeito;
    int i;
    int n = 1, soma = 1;
    scanf ("%d", &entrada);
 
    printf ("%d = 1 ", entrada);
 
    while (n <= entrada){
 
        if (entrada % n == 0 && n != 1){
 
            perfeito = n;
            if (perfeito == entrada) break;
            soma += perfeito;
            printf ("+ %d ", perfeito);
        }
        n++;
        
 
    }
    
    if (soma == entrada) printf ("= %d (NUMERO PERFEITO)\n", soma);
    else printf ("= %d (NUMERO NAO E PERFEITO)\n", soma);
 
    return 0;
}