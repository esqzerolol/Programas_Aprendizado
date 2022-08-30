#include <stdio.h>

int soma_divisores (int num);

int main (){

    int entrada, check, menor, maior;
    int i;
    int valor_x = 0, valor_y = 0;
    scanf ("%d", &entrada);

    for (i = 0; i < entrada; i++){

        while (1){
            valor_x++;
            valor_y = soma_divisores(valor_x);
            check = soma_divisores(valor_y);

            if (check == valor_x && valor_y != 1 && check != 1 && check != valor_y){
                menor = valor_x;
                maior = valor_y;
                if (valor_x < valor_y){
                    printf ("(%d,%d)\n", menor, maior);
                    break;
                }
            }
        }
    }
    
    return 0;
}

int soma_divisores (int num){

    int perfeito;
    int n = 1, soma = 1;

    while (n <= num){

        if (num % n == 0 && n != 1){

            perfeito = n;
            if (perfeito == num) break;
            soma += perfeito;

        }
        n++;

    }

    return soma;
}