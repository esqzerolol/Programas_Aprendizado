#include <stdio.h>
#include <stdlib.h>

typedef struct strct_funcionario{
    int matricula;
    int idade;
    int num_filhos;
    char sexo;
    double salario;
} Funcionario;

Funcionario *criar_func(int num);

int main (){

    int num_func;
    int media_idade, media_filhos;
    int primeira, segunda, terceira, quarta;
    int i;
    
    media_idade = media_filhos = primeira = segunda = terceira = quarta = 0;

    // criar os funcionarios
    scanf ("%d", &num_func);
    Funcionario *pf = criar_func(num_func);

    // scannear a informacao de cada funcionario
    for (i = 0; i < num_func; i++){
        scanf ("%d", &(pf+i)->matricula);
        scanf ("%d", &(pf+i)->idade);
        scanf ("%d%*c", &(pf+i)->num_filhos);
        scanf ("%c", &(pf+i)->sexo);
        scanf ("%lf", &(pf+i)->salario);
    }

    // calcular medias
    for (i = 0; i < num_func; i++){
        media_filhos += (pf+i)->num_filhos;
        media_idade += (pf+i)->idade;
    } media_filhos = media_filhos / num_func; media_idade = media_idade / num_func;
    
    for (i = 0; i < num_func; i++){
        if ((pf+i)->idade > media_idade && (pf+i)->salario > 3600.00) primeira++;
        if ((pf+i)->sexo == 'F' && (pf+i)->num_filhos > media_filhos) segunda++;
        if ((pf+i)->sexo == 'M' && (pf+i)->num_filhos > media_filhos) terceira++;
        if ((pf+i)->idade > 47 && ((pf+i)->salario) / ((pf+i)->num_filhos + 1) < 2400.00) quarta++;
    }
    
    printf ("%d %d %d %d\n", primeira, segunda, terceira, quarta);
    
    free (pf);
    return 0;
}

Funcionario *criar_func(int num){
    Funcionario *pl;
    pl = (Funcionario*) malloc (num * sizeof(Funcionario));   
    return pl;
}
