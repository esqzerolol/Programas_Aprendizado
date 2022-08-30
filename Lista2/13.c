#include <stdio.h>
#include <math.h>

int main (){

    int entrada;
    int i;
    int contador_1 = 1, contador_2, contador_3 = 1;
    scanf ("%d", &entrada);

    for (i = 1; i <= entrada; i++){
        printf ("%d*%d*%d = ", i, i, i);
        contador_2 = 1;
        while (contador_2 <= entrada){
            if (contador_2 == i) {
                printf ("%d\n", contador_1);
                contador_1 += 2;
                break;
            }
            else if (contador_2 < i){
                printf ("%d+", contador_1);
            }
            contador_1 += 2;
            contador_2++;
            
        }
    }

    return 0;
}