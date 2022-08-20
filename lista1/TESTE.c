#include <stdio.h>

int main(){

    int num, bin = 0, rem, i = 1;
    scanf ("%d", &num);
    while (num != 0) {
        rem = num % 2;
        num /= 2;
        bin += rem * i;
        i *= 10;
        printf("a = %d\nb = %d\nc = %d\nd = %d\n\n", num, bin, rem, i);

    }

    return 0;
}