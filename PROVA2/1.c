 #include <stdio.h>

int sorteio (int participantes);

int main (){

    int num_part, num_ingresso, ganhador;
    int i;
    int n = 1;

    while (1){

        scanf ("%d", &num_part);

        if (num_part == 0) break;        
        ganhador = sorteio(num_part);

        if (ganhador < 1) {
            printf ("Teste %d\n", n);
            printf ("Sem vencedor\n\n");
        }
        else {
            printf ("Teste %d\n", n);
            printf ("%d\n\n", ganhador);
        }
        n++;
    }
        
    return 0;
}

int sorteio (int participantes){

    int num_ingresso;
    int i;
    int give = 0, k = 1, ganhador = 0, hold = 0;
    for (i = 0; i < participantes; i++){
            
            scanf ("%d", &num_ingresso);
            
            if (num_ingresso == k && i + 1 == num_ingresso && hold != 1){
                ganhador = k;
                hold++;
            }
            k++;
        }
    k = 1;
    
    return ganhador;
}