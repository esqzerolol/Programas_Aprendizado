#include <stdio.h>
float ord (float n, float n2);
int main (){

    float num_1, num_2;
    scanf ("%f%f", &num_1, &num_2);

    num_1 = ord(num_1, num_2);
    printf ("%f, %f\n", num_1, num_2);

    return 0;
}

float ord (float num_1, float num_2){
    float n, n2;
    if (n > n2){
        n  = n  - n2;
        n2 = n  + n2;
        n  = n2 - n;
    }
    return n, n2;
}