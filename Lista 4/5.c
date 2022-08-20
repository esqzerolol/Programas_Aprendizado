#include <stdio.h>
#include <string.h>

int main (){

    int num;
    int letras, vogais, consoantes;
    int c, i;
    char V[10001];

    scanf ("%d%*c", &num);

    for (c = 0; c < num; c++){
        
        scanf ("%[^\n]", V);

        letras = 0;
        vogais = 0;
        consoantes = 0;

        for (i = 0; V[i] != '\0'; i++){
            
            if (    //  VOGAIS
                    V[i] == 'A' ||  // A
                    V[i] == 'E' ||  // E
                    V[i] == 'I' ||  // I
                    V[i] == 'O' ||  // O
                    V[i] == 'U' ||  // U
                    //  vogais
                    V[i] == 'a'  || // a
                    V[i] == 'e' || // e
                    V[i] == 'i' || // i
                    V[i] == 'o' || // o
                    V[i] == 'u' // u
                    ) {vogais++; letras++;}

            else if ((V[i] > 64 && V[i] < 91) || (V[i] > 96 && V[i] < 123)) {consoantes++; letras++;}
        }
        printf ("Letras = %d\n", letras);
        printf ("Vogais = %d\n", vogais);
        printf ("Consoantes = %d\n", consoantes);
    }


    return 0;
}