#include <stdio.h>
#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1

int str_split(char *str[], char m[][MAX_WORD_LEN], char *sep[]);

int main (){

    int i, j;
    int k = 0;
    char Tinicial[MAX_WORD_LEN];
    char CS[MAX_WORD_LEN];
    char T[MAX_WORDS][MAX_WORD_LEN];
    
    scanf ("%[^\n]%*c", Tinicial);
    scanf ("%[^\n]%*c", CS);
    str_split (Tinicial, T, CS);

    return 0;
}

int str_split(char *str[], char m[][MAX_WORD_LEN], char *sep[]){

    int i, j, c;
    int k = 0;
    for (i = 0; str[i] != '\0'; i++){
        for (j = 0; sep[j] != '\0'; j++){
            if (str[i] == sep[j]){
                for (c = 0; str[c] != sep[j]; c++){
                    m[k][c] = str[c];
                }
                k++;
            }
        }
    }
}
