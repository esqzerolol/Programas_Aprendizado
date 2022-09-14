#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct aposta{
    unsigned int numJogo;
    unsigned int numero[6];
} cartela;
 
cartela *criar_aposta(int num);
 
int main (){
 
    unsigned int num_apostas; 
    unsigned int acertos = 0, check = 0;
    unsigned int lista_acertos[7];
    unsigned int i, j, k, l;
    
    scanf("%d", &num_apostas);
    cartela *pc = criar_aposta(num_apostas+1);
    if (pc == NULL) exit(1);
 
    for (i = 0; i < num_apostas+1; i++){ scanf ("%d", &(pc+i)->numJogo); for (j = 0; j < 6; j++){ scanf ("%d", &(pc+i)->numero[j]); }}
    for (i = 0; i < num_apostas; i++){
        memset (lista_acertos, 0, sizeof(lista_acertos));
        acertos = k = 0;
        for (j = 0; j < 6; j++){
            for (l = 0; l < 6; l++){
                if ((pc+i)->numero[j] == (pc+(num_apostas))->numero[l]){
                    acertos++;
                    lista_acertos[k] = (pc+(num_apostas))->numero[l];
                    k++;
                    check++;
                    break;
                }
            }
        }
        switch (acertos){
 
            case 4:
            printf ("QUADRA %d: ", (pc+i)->numJogo);
            for (k = 0; lista_acertos[k] != 0; k++){
                printf ("%d ", lista_acertos[k]);
            } printf ("\n");
            break;
            
            case 5:
            printf ("QUINA %d: ", (pc+i)->numJogo);
            for (k = 0; lista_acertos[k] != 0; k++){
                printf ("%d ", lista_acertos[k]);
            } printf ("\n");
            break;
 
            case 6:
            printf ("SENA %d: ", (pc+i)->numJogo);
            for (k = 0; lista_acertos[k] != 0; k++){
                printf ("%d ", lista_acertos[k]);
            } printf ("\n");
            break;
        }
    }
    if (check == 0) printf ("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", (pc+(num_apostas))->numJogo);
 
    free(pc);
 
    return 0;
}
 
cartela *criar_aposta(int num){
    cartela *pl;
    pl = (cartela*) malloc (num * sizeof(cartela));   
    return pl;
}