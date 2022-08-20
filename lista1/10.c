#include <stdio.h>
int main (){

    // Declara as variáveis
    int x1, x2, x3;
    char Menor, Meio, Maior;

    // Entra com elas (as primeiras com um espaço entre si, depois apenas A, B ou C sem espaço entre elas)
    scanf ("%d %d %d\n", &x1, &x2, &x3);
    scanf ("%c%c%c", &Menor, &Meio, &Maior);

    // Ordena as variáveis x1, x2 e x3 de forma crescente
    if (x1 > x2){
        x1 = x1 - x2;
        x2 = x1 + x2;
        x1 = x2 - x1;
    }
    if (x1 > x3){
        x1 = x1 - x3;
        x3 = x1 + x3;
        x1 = x3 - x1;
    }
    if (x2 > x3){
        x2 = x2 - x3;
        x3 = x2 + x3;
        x2 = x3 - x2;
    }

    // Verifica o input das letras e as organiza.
    // A = número menor AKA x1
    // B = número médio AKA x2
    // C = número maior AKA x3
    if      (Menor == 'A') Menor = x1;
    else if (Menor == 'B') Menor = x2;
    else if (Menor == 'C') Menor = x3;

    if      (Meio == 'A') Meio = x1;
    else if (Meio == 'B') Meio = x2;
    else if (Meio == 'C') Meio = x3;

    if      (Maior == 'A') Maior = x1;
    else if (Maior == 'B') Maior = x2;
    else if (Maior == 'C') Maior = x3;

    // Imprime os números na ordem desejada
    printf ("%d %d %d\n", Menor, Meio, Maior);

    return 0;
}