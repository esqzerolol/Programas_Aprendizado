#include <stdio.h>
#include <stdlib.h>

typedef struct lista_cursos{
    int codigo_curso;
    double vlr_credito;
    char NOME_CRS[101];
} cursos;

typedef struct lista_alunos{
    char NOME_ALN[501];
    int codigo_matric;
    int creditos;
} alunos;

cursos *criar_cursos(int num);
alunos *criar_alunos(int num);

int main (){

    int num_cursos, num_alunos;
    int i, j;

    scanf ("%d", &num_cursos);
    cursos *pc = criar_cursos(num_cursos);

    for (i = 0; i < num_cursos; i++){
        scanf ("%d", &(pc+i)->codigo_curso);
        scanf ("%lf%*c", &(pc+i)->vlr_credito);
        scanf ("%[^\n]%*c", (pc+i)->NOME_CRS);
    }

    scanf ("%d%*c", &num_alunos);
    alunos *pa = criar_alunos(num_alunos);

    for (i = 0; i < num_alunos; i++){
        scanf ("%[^\n]", (pa+i)->NOME_ALN);
        scanf ("%d", &(pa+i)->codigo_matric);
        scanf ("%d%*c", &(pa+i)->creditos);
    }
    for (i = 0; i < num_alunos; i++){
        for (j = 0; j < num_cursos; j++){
            if ((pa+i)->codigo_matric == (pc+j)->codigo_curso){
                printf ("Aluno(a): %s ", (pa+i)->NOME_ALN);
                printf ("Curso: %s ", (pc+j)->NOME_CRS);
                printf ("Num. Creditos: %d ", (pa+i)->creditos);
                printf ("Valor Credito: %.2lf ", (pc+j)->vlr_credito);
                printf ("Mensalidade: %.2lf\n", ((pa+i)->creditos)*((pc+j)->vlr_credito));
            }
        }
        
    }

    free(pa);
    free(pc);
    return 0;
}

cursos *criar_cursos(int num){
    cursos *pl;
    pl = (cursos*) malloc (num * sizeof(cursos));   
    return pl;
}
alunos *criar_alunos(int num){
    alunos *pl;
    pl = (alunos*) malloc (num * sizeof(alunos));   
    return pl;
}