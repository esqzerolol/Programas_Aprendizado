#include <stdio.h>

int main (){

    unsigned int a, b, tmp;
    scanf ("%d", &a);

    tmp = a%2;
    b = tmp*1;
    a /= 10;

    tmp = a%2;
    b += tmp*10;

    return 0;
}