#include <stdio.h>

int main(){

    float a, b, c;
    scanf ("%f%f%f", &a, &b, &c);
    if (a > b){
        a = a - b;
        b = a + b;
        a = b - a;
    }
    if (a > c){
        a = a - c;
        c = a + c;
        a = c - a;
    }
    if (b > c){
        b = b - c;
        c = b + c;
        b = c - b;
    }
    printf ("%.2f, %.2f, %.2f\n", a, b, c);

    return 0;
}