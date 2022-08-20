#include <stdio.h>

int main(){

    int numero, resultado, subtracao;
    scanf ("%d%d", &numero, &subtracao);
    resultado = numero - subtracao;
    printf ("O valor de %d - %d é = %d\n", numero, subtracao, resultado);

    return 0;
}