#include <stdio.h>
#include <string.h>

int main (){

    int num, temp;
    int i, j, c;
    char V[10001];

    scanf ("%d%*c", &num);
    
    for (i = 0; i < num; i++){
        
        scanf ("%[^\n]%*c", V);

        for (j = 0; V[j] != '\0'; j++){
            if ((V[j] >= 'A' && V[j] <= 'Z') || (V[j] >= 'a' && V[j] <= 'z')) V[j] += 3;
        }

        char V2[j+1];
        memset (V2, '\0', sizeof(V2));
        
        for (c = 0; j > 0; c++, j--){
            V2[c] = V[j - 1];
        }

        temp = (c / 2);

        for (j = temp; V2[j] != '\0'; j++){
            V2[temp] -= 1;
            temp++;
        }

        printf ("%s\n", V2);
        memset (V2, '\0', sizeof(V2));
        memset (V, '\0', sizeof(V));

    }
    

    return 0;
}