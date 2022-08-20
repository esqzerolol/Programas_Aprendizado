#include <stdio.h>
#include <string.h>

int main (){

    int i;
    char PAIS[50];
    char LISTA[][50] = {{"Feliz Natal!"}, {"Frohliche Weihnachten!"}, {"Frohe Weihnacht!"}, {"Chuk Sung Tan!"}, {"Feliz Navidad!"},
                   {"Kala Christougena!"}, {"Merry Christmas!"}, {"Merry Christmas!"}, {"Merry Christmas!"}, {"Feliz Natal!"},
                   {"God Jul!"}, {"Mutlu Noeller"}, {"Feliz Navidad!"}, {"Feliz Navidad!"}, {"Feliz Navidad!"},
                   {"Merry Christmas!"}, {"Merry Christmas!"}, {"Nollaig Shona Dhuit!"}, {"Zalig Kerstfeest!"},
                   {"Buon Natale!"}, {"Buon Natale!"}, {"Milad Mubarak!"}, {"Milad Mubarak!"}, {"Merii Kurisumasu!"}};
    
    while (scanf ("%[^\n]", PAIS) != EOF){
        for (i = 0; PAIS[i] != '\0'; i++){
            if (PAIS[i] == 'a'){
                if (PAIS[i+1] == 'u'){
                    if (PAIS[i+5] == 'a') printf ("%s", );
                    else if (PAIS[i+5] == 'i') printf ("")
                }
                else if (PAIS[i+1] == 'l') printf ("%s", );
                else if (PAIS[i+1] == 'n') printf ("%s", );
                else if (PAIS[i+1] == 'r') printf ("%s", );
            }
            else if (PAIS[i] == 'b'){
                if (PAIS[i+1] == 'e') printf ("%s", );
                else if (PAIS[i+1] == 'r') printf ("%s", );
            }
            else if (PAIS[i] == 'c'){
                if (PAIS[i+1] == 'a') printf ("%s", );
                else if (PAIS[i+1] == 
            }
        }
    }
    

    return 0;
}