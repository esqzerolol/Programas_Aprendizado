#include <stdio.h>
#include <string.h>

int main (){

    int MaiMin = 1;
    char V[51];
    int i;

    while (scanf ("%[^\n]%*c", V) != EOF){

        for (i = 0; V[i] != '\0'; i++){
            if (MaiMin == 1 && V[i] != ' '){
                if (V[i] >= 'a' && V[i] <= 'z') V[i] -= 32;
                MaiMin = 0;
            }
            else if (MaiMin == 0 && V[i] != ' '){
                if (V[i] >= 'A' && V[i] <= 'Z') V[i] += 32;
                MaiMin = 1;
            }
        }
        printf ("%s\n", V);
        memset (V, '\0', sizeof(V));
        MaiMin;
    }
    
    return 0;
}