#include <stdio.h>
#define N 2
 
double det (int M[][N]);
 
int main (){
 
    int i, j;
    int M[N][N];
    
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            scanf ("%d", &M[i][j]);
        }
    }
 
    printf ("%.2lf\n ", det(M));
    return 0;
}
 
double det (int M[][N]){
 
    int det;
    int i = 0, j = 0;
 
    det = (M[i][j] * M[i+1][j+1]) - (M[i+1][j] * M[i][j+1]);
 
    return det;
}