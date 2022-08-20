#include <stdio.h>
#include <string.h>

int main (){

    int num, check;
    int soma = 0;
    int i, j, k;
    int V1[10] = {6,2,5,5,4,5,6,3,7,6};
    char V2[1025];

    scanf ("%d", &num);

    for (i = 0; i < num; i++){

        scanf ("%s", V2);
        for (j = 0; V2[j] != '\0'; j++){
            
            for (k = 0; k < 10;k++){
                if (V2[j] == (k + 48)){
                    soma += V1[k];
                }
            }
                

        }
        printf ("%d leds\n", soma);
        soma = 0;

    }
    
    return 0;
}