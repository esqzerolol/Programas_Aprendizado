#include <stdio.h>
#include <string.h>

void prefix (int n, char V[], char *p);

int main (){

    int num, n;
    int i;
    char VM[500], VoutM[500];
    
    scanf ("%d", &num);
    
    for (i = 0; i < num; i++){

        memset (VM, '\0', 500);
        memset (VoutM, '\0', 500);

        scanf ("%d%*c", &n);
        scanf ("%[^\n]%*c", VM);

        prefix(n, VM, VoutM);

        printf ("%s\n", VoutM);
    }
    
    


    return 0;
}

void prefix (int n, char V[], char *p){

    int i;
    char Vout[n+1];
    memset (Vout, '\0', n+1);

    for (i = 0; i < n; i++) p[i] = V[i];
    
}   