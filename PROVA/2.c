#include <stdio.h>

int main (){

    unsigned int senha;
    char categoria;
    scanf ("%d %c", &senha, &categoria);

    if (categoria == 'A' || categoria == 'G' || categoria == 'U'){
        if (senha < 100000) printf ("SENHA INVALIDA: %d - MINIMO 6 DIGITOS\n", senha);

    else switch (senha) {

            case 321456:
                switch (categoria){
                    case 'A':
                    printf ("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
                    break;
                    case 'G':
                    goto negado;
                    break;
                    case 'U':
                    goto negado;
                    default:
                    printf ("CATEGORIA INVALIDA: %c\n", categoria);
                }
                break;

            case 9510753:
                switch (categoria){
                    case 'A':
                    goto negado;
                    break;
                    case 'G':
                    printf ("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
                    break;
                    case 'U':
                    goto negado;
                    break;
                    default:
                    printf ("CATEGORIA INVALIDA: %c\n", categoria);
                }
                break;
            
            case 78955632:
                switch (categoria){
                    case 'A':
                    goto negado;
                    break;
                    case 'G':
                    goto negado;
                    break;
                    case 'U':
                    printf ("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
                    break;
                    default:
                    printf ("CATEGORIA INVALIDA: %c\n", categoria);
                }
                break;

            default:
            negado:
            printf ("ACESSO NEGADO\n");
    }

    }
    else printf ("CATEGORIA INVALIDA: %c\n", categoria);

    return 0;
}