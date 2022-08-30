#include <stdio.h>

int main (){

    int entrada;
    int k = 2;

    while (1){

        scanf ("%d", &entrada);
        if (entrada <= 1) printf ("Fatoracao nao e possivel para o numero %d!\n", entrada);
        else {
            printf ("%d = ", entrada);
            while (entrada > 1) {

                if ((entrada % k) == 0){
                    if ((entrada / k) == 1) {
                        printf ("%d\n", k);
                        return 0;
                    }
                    printf ("%d * ", k);
                    entrada /= k;
                }
                else k++;
                
                
            }
        }
    }

    return 0;
}
