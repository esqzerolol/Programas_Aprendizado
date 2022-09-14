#include <stdio.h>
#include <stdlib.h>

typedef struct usuario{
    int likes;
    int retweets;
    int mencoes;
} twitter;

twitter *criar_user(int num);

int main (){

    int tamanho_matrix, interacoes, sender, receiver;
    int usuarios_inativos, usuarios_ativos;
    int likes, retweet, mencoes;
    int i;
    double media_likes, media_retweets, media_mencoes;
    usuarios_inativos = media_likes = media_mencoes = media_retweets = 0;

    scanf ("%d", &tamanho_matrix);
    twitter *pu = criar_user(tamanho_matrix);
    if (pu == NULL){
        exit(1);
    }
    scanf ("%d", &interacoes);
    for (i = 0; i < interacoes; i++){
        scanf ("%d %d", &sender, &receiver);
        scanf ("%d %d %d", &likes, &retweet, &mencoes);
        (pu+sender)->likes += likes;
        (pu+sender)->retweets += retweet;
        (pu+sender)->mencoes += mencoes;
    }

    for (i = 0; i < tamanho_matrix; i++){
        if ((pu+i)->likes == 0 && (pu+i)->retweets == 0 && (pu+i)->mencoes == 0) usuarios_inativos++;
        else {
            printf ("Usuario %d - ", i); 
            printf ("num. likes: %d, ", (pu+i)->likes);
            printf ("num. retweets: %d ", (pu+i)->retweets);
            printf ("e num. mencoes: %d\n", (pu+i)->mencoes);
        }
    } usuarios_ativos = tamanho_matrix - usuarios_inativos;

    printf ("Slots vazios: %d\n", (tamanho_matrix*tamanho_matrix)-interacoes);

    for (i = 0; i < tamanho_matrix; i++){
        media_likes += (pu+i)->likes;
        media_retweets += (pu+i)->retweets;
        media_mencoes += (pu+i)->mencoes;
    }
    media_likes = media_likes / usuarios_ativos;
    media_retweets = media_retweets / usuarios_ativos;
    media_mencoes = media_mencoes / usuarios_ativos;

    printf ("Media de likes por usuario: %.2lf\n", media_likes);
    printf ("Media de retweets por usuario: %.2lf\n", media_retweets);
    printf ("Media de mencoes por usuario: %.2lf\n", media_mencoes);

    free(pu);
    return 0;
}

twitter *criar_user(int num){
    twitter *pl;
    pl = (twitter*) malloc (num * sizeof(twitter));   
    return pl;
}