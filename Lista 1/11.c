#include <stdio.h>

int main (){

    float num_1, num_2, num_3, num_4;
    scanf ("%f%f%f%f", &num_1, &num_2, &num_3, &num_4);



    if (num_1 > num_2){
        num_1 = num_1 - num_2;
        num_2 = num_1 + num_2;
        num_1 = num_2 - num_1;
    }
    if (num_1 > num_3){
        num_1 = num_1 - num_3;
        num_3 = num_1 + num_3;
        num_1 = num_3 - num_1;
    }
    if (num_1 > num_4){
        num_1 = num_1 - num_4;
        num_4 = num_1 + num_4;
        num_1 = num_4 - num_1;
    }



    if (num_2 > num_3){
        num_2 = num_2 - num_3;
        num_3 = num_2 + num_3;
        num_2 = num_3 - num_2;
    }
    if (num_2 > num_4){
        num_2 = num_2 - num_4;
        num_4 = num_2 + num_4;
        num_2 = num_4 - num_2;
    }

    

    if (num_3 > num_4){
        num_3 = num_3 - num_4;
        num_4 = num_3 + num_4;
        num_3 = num_4 - num_3;
    }

    printf("%.2f, %.2f, %.2f, %.2f", num_1, num_2, num_3, num_4);

    return 0;
}