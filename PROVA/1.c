#include <stdio.h>
#include <math.h>

int main (){

    double sensor1, sensor2, sensor3, distancia1, distancia2, distancia3;
    scanf ("%lf %lf %lf", &sensor1, &sensor2, &sensor3);

    distancia2 = sensor2;
    

    if (distancia1 == distancia2 && distancia1 == distancia3)      printf ("VOLTAR");
    else if (distancia1 < distancia2 && distancia1 < distancia3)   printf ("DIREITA");
    else if (distancia1 > distancia2 && distancia1 > distancia3)   printf ("ESQUERDA");
    else                                                           printf ("PARAR");


    return 0;
}