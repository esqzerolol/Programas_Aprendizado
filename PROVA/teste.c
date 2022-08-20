#include <stdio.h>

int main (){

    unsigned int senha;
    char categoria;
    scanf ("%d %c", &senha, &categoria);

    if (senha == 321456 && categoria != 'A'){
        printf ("CATEGORIA INVALIDA: %c", categoria);
    }
    else return 0;
    if (senha == 9510753 && categoria != 'G'){
        printf ("CATEGORIA INVALIDA: %c", categoria);
    }
    else return 0;
    if (senha == 78955632 && categoria != 'U'){
        printf ("CATEGORIA INVALIDA: %c", categoria);
    }


    return 0;
}