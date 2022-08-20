#include <stdio.h>

int main (){

    unsigned int a, b1, b2, b3, b4, b5, b6, b7, b8;
    scanf ("%d", &a);
    
    if (a >= 256){
        printf ("Numero invalido!\n");
        return 0;
    }
    else {
    if (a > 127){
        b1 = 1;
        a = a - 128;
    }
    if (a > 63){
        b2 = 1;
        a = a - 64;
    }
    if (a > 31){
        b3 = 1;
        a = a - 32;
    }
    if (a > 15){
        b4 = 1;
        a = a - 16;
    }
    if (a > 7){
        b5 = 1;
        a = a - 8;
    }
    if (a > 3){
        b6 = 1;
        a = a - 4;
    }
    if (a > 1){
        b7 = 1;
        a = a - 2;
    }
    if (a > 0){
        b8 = 1;
        a = a - 1;
    }
    printf ("%d%d%d%d%d%d%d%d", b1, b2, b3, b4, b5, b6, b7, b8);
    }

    return 0;
}