#include <stdio.h>

int inverter (int num);

int main (){

    int testes, num1, num2, maior;
    int i;

    scanf ("%d", &testes);
    for (i = 0; i < testes; i++){

        scanf ("%d%d", &num1, &num2);
        num1 = inverter(num1);
        num2 = inverter(num2);

        if (num1 > num2){
        maior = num1;
        }
        else maior = num2;

        printf("%d\n", maior); 

    }

    return 0;
}




int inverter (int num){

        int n1 = 0, n2 = 0, n3 = 0;
        n3 = (num / 100);
        n2 = (num / 10) - (n3 * 10);
        n1 = (num)      - (n3 * 100 + n2 * 10);

        num = (n1 * 100) + (n2 * 10) + n3;

    return num;
}