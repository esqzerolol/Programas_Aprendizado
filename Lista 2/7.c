#include <stdio.h>

int main (){

    // mediaP = média par  | mediaI = média ímpar
    // iP = incremento par | iI = incremento ímpar
    double mediaP = 0, mediaI = 0;
    int iP = 0, iI = 0;


    while (1){
        int var1;
        scanf ("%d", &var1);
        if (var1 == 0) break;
        if (var1 % 2 == 0){
            mediaP += var1;
            iP++;
        }
        else {
            mediaI += var1;
            iI++;
        }
    }

    if (iP != 0) printf ("MEDIA PAR: %lf\n", mediaP / iP);
    else printf ("MEDIA PAR: 0.000000\n");
    if (iI != 0)  printf ("MEDIA IMPAR: %lf\n", mediaI / iI);
    else printf ("MEDIA IMPAR: 0.000000\n");
    

    return 0;
}