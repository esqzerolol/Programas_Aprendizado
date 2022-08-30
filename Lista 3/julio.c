#include <stdio.h>
int separaDigitos(int n, int *a, int *b, int *c);

int main(){
    int n, a,b,c;
    scanf("%d", &n);
    separaDigitos(n,&a,&b,&c);
    printf("%d%d%d",a,b,c);
    return 0;
}

int separaDigitos(int n, int *a, int *b, int *c){
    int n1, n2, n3;
    n1 = n/100;
    n2 = ((n%100) - (n%10))/10; 
    n3 = n%10;
    *a = n3;
    *b = n2;
    *c = n1;
}
