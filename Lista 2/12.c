#include <stdio.h>
#include <math.h>

int main (){

    int hipotenusa_entrada;
    int i, hipotenusa_i;
    int catA, catB;
    scanf ("%d", &hipotenusa_entrada);

    for (hipotenusa_i = 1; hipotenusa_i <= hipotenusa_entrada; hipotenusa_i++){
        catA = hipotenusa_i;
        catB = hipotenusa_i;
        while (catA >= 1 || catB >= 1){
            if (pow(hipotenusa_i,2) == (pow(catA,2) + pow(catB,2))){
                if (catA > catB && catB != 0 && catA != 0) printf ("hipotenusa = %d, catetos %d e %d\n", hipotenusa_i, catB, catA);
            
            }
            if (catB < 1){
                catA--;
                catB = hipotenusa_i;
            }
            else catB--;
            }
        }

    return 0;
}