#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista_itens{
    char item[51];
    double preco;
} itens;

itens *criar_itens(int num);

int main (){

    char produto[51];
    int num_idas_mercado, qtd_produtos_feira, comprar, qtd_produto; 
    double total_compra;
    int i, j, k;

    scanf ("%d", &num_idas_mercado);
    double totais[num_idas_mercado];

    for (i = 0; i < num_idas_mercado; i++){

        total_compra = 0;

        scanf ("%d", &qtd_produtos_feira);
        itens *pi = criar_itens(qtd_produtos_feira);

        for (j = 0; j < qtd_produtos_feira; j++){
            scanf ("%s", (pi+j)->item);
            scanf ("%lf", &(pi+j)->preco);
        }

        scanf ("%d", &comprar);
        for (j = 0; j < comprar; j++){
            scanf ("%s %d", produto, &qtd_produto);
            for (k = 0; k < qtd_produtos_feira; k++){
                if (strcmp((pi+k)->item, produto) == 0){
                    total_compra += (((pi+k)->preco) * qtd_produto);
                    break;
                }
            }
        }
        totais[i] = total_compra;
        free(pi);
    }

    for (i = 0; i < num_idas_mercado; i++){
        printf ("R$ %.2lf\n", totais[i]);
    }

    return 0;
}

itens *criar_itens(int num){
    itens *pl;
    pl = (itens*) malloc (num * sizeof(itens));   
    return pl;
}