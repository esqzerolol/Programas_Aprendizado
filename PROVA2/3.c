#include <stdio.h>
 
int main (){
 
    int casos, num, antecessor, check;
    int i;
    int hold = 0, repeticao = 0;
    
    
    while (1){
 
        scanf ("%d", &casos);
        if (casos == 0) break;
 
        antecessor = 0;
        check = 0;
 
        for (i = 0; i < casos; i++){
            scanf ("%d", &num);
            if (hold == 0);
            else if (antecessor == num){
                repeticao++;
            }
            else {
                if ((antecessor - num) <= 0){
                    check++; 
                } 
                if ((antecessor - num) > 0){
                    check--;
                }
            }
            antecessor = num;
            hold++;
        }
        casos -= repeticao;
        if (check == (casos - 1) || check == (-casos + 1)) printf ("Nao intercalada\n");
        else printf ("Intercalada\n");
        hold = 0;
    }
        
    
    return 0;
}