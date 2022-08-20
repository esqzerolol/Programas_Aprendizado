#include <stdio.h>
#include <math.h>

int main (){

    // Colocando as variáveis e as reconhecendo (input)

    float num1, num2, resultado;
    char operador;
    scanf ("%f%c%f", &num1, &operador, &num2);

    // Começa aqui a analisar qual operador foi inserido, baseado nisso
    // vai escolher qual operação realizar

    switch (operador){

        // Operadores Aritméticos

        case '+':
            resultado = num1 + num2;
            printf ("%g\n", resultado);
            if (num1 == num2) printf ("true\n");
            else              printf ("false\n");
            break;

        case '-':
            resultado = num1 - num2;
            printf ("%g\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf ("%g\n", resultado);
            break;

        case '/':
            resultado = num1 / num2;
            printf ("%g\n", resultado);
            break;

        case '%':
            resultado = (int)num1 % (int)num2;
            printf ("%g\n", resultado);
            break;

        case '~':
            resultado = pow(num1,num2);
            printf ("%lf\n", resultado);
            break;
            

        // Operadores Relacionais

        case '=':
            if (num1 == num2) printf ("true\n");
            else              printf ("false\n");
            break;

        case '!':
            if (num1 != num2) printf ("true\n");
            else              printf ("false\n");
            break;

        case '<':
            if (num1 < num2)  printf ("true\n");
            else              printf ("false\n");
            break;

        case '>':
            if (num1 > num2)  printf ("true\n");
            else              printf ("false\n");
            break;

        // Operadores Lógicos

        case '^':
            if (num1 && num2 == 1) printf("true\n");
            else                   printf ("false\n");
            break;

        case 'v':
            if (num1 || num2 == 1) printf("true\n");
            else                   printf ("false\n");
            break;

        case 'o':
            if (num1 != num2)      printf("true\n");
            else                   printf ("false\n");
            break;
            
        default:
            break;
    }

    return 0;
}