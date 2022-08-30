#include <stdio.h>

int main (){

    int i;
    float Menor, Medio, Maior;

    scanf ("%d", &i);
    scanf ("%f%f%f", &Menor, &Medio, &Maior);

    if (Menor > Medio){
        Menor = Menor - Medio;
        Medio = Menor + Medio;
        Menor = Medio - Menor;
    }
    if (Menor > Maior){
        Menor = Menor - Maior;
        Maior = Menor + Maior;
        Menor = Maior - Menor;
    }
    if (Medio > Maior){
        Medio = Medio - Maior;
        Maior = Medio + Maior;
        Medio = Maior - Medio;
    }

    if (i == 1) printf ("%.2f %.2f %.2f\n", Menor, Medio, Maior);
    if (i == 2) printf ("%.2f %.2f %.2f\n", Maior, Medio, Menor);
    if (i == 3) printf ("%.2f %.2f %.2f\n", Medio, Maior, Menor);

    

    return 0;
}