#include <stdio.h>

int main (){

    int width, height, max_bright, maior;
    int i, j, c;

    scanf ("%d %d", &width, &height);
    
    if (width > height) maior = width;
    else maior = height;
    max_bright = maior;

    printf ("P2\n");
    printf ("%d %d\n", width, height);
    printf ("%d\n", max_bright);

    for (i = 0; i < height; i++){
        for (j = 0; j < width; j++){
            printf ("%d ", max_bright);
        }
        if (max_bright > 0) max_bright--;
        printf ("\n");
    }


    return 0;
}