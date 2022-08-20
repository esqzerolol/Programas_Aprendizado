#include <stdio.h>

int main (){

    int x, m, M, s, i;
    scanf ("%d", &x);
    m = x;
    M = x;
    s = x;
    i = 0;
    while (i < 4){
        scanf ("%d", &x);
        if (x < m) m = x;
        if (x > M) M = x;
        s = s + x;
        i++;
    }

    printf("Menor: %d\n", m);
    printf("Maior: %d\n", M);
    printf("Media: %lf\n", (s - m - M) / 3.0);

    return 0;
}