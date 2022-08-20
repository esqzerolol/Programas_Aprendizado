#include <stdio.h>
#include <string.h>

int main (){

    int num, total;
    int i, j;
    int maior = 0;

    while (1){
        
        total = 0;
        scanf ("%d", &num);
        
        if (num == 0) break;

        else {
            
            int V[num + 1];
            memset(V, '\0', sizeof(V));

            for (i = 0; i < num; i++) {
                scanf ("%d", &V[i]);
                if (V[i] > maior) maior = V[i];
            }

            for (i = 0; i <= maior; i++){

                for (j = 0; j < num; j++){
                    if (i == V[j]) total++;
                }
                    printf ("(%d) %d\n", (i), total);
            }
            memset(V, 0, sizeof(V));
        }
        maior = 0;
    }
    return 0;
}