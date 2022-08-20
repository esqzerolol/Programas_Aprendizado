#include <stdio.h>
#include <string.h>

int main (){

    int inicial_1, inicial_2, maior, mybreak;
    int aliteracao = 0, gambiarra = 0;
    int i, j;
    char TEXTO[100*(50+1)];

    while (scanf ("%[^\n]%*c", TEXTO) != EOF){

        for (i = 0; TEXTO[i] != '\0'; i++){

            if (TEXTO[i] >= 'A' && TEXTO[i] <= 'Z') TEXTO[i] += 32;

            if (TEXTO[i] >= 'a' && TEXTO[i] <= 'z'){

                inicial_1 = TEXTO[i];

                for (j = i; TEXTO[j] != ' '; j++){
                    i++;
                    if (gambiarra > 10){
                        break;
                    }
                    gambiarra++;
                } gambiarra = 0;

                if (TEXTO[j] == ' ') {

                    if (TEXTO[j+1] >= 'A' && TEXTO[j+1] <= 'Z') TEXTO[j+1] += 32;

                    inicial_2 = TEXTO[j+1];

                    if (inicial_1 == inicial_2 && mybreak == 0 ) {
                        aliteracao++;
                        mybreak++;
                    }
                    else if (inicial_1 != inicial_2) mybreak = 0;
                }
            }
        }
        printf ("%d\n", aliteracao);
        memset (TEXTO, '\0', sizeof(TEXTO));
        aliteracao = 0;
        maior = 0;
        mybreak = 0;
    }


    return 0;
}