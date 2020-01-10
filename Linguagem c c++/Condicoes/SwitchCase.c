#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 2;
    char b = 'x';

    //Exemplode "MENU" com um if
    if (a == 1)
    {
        printf("Opeção escolhida foi: 1 \n");
    }
    else if (a == 2)
    {
        printf("Opeção escolhida foi: 2 \n");
    }
    else if (a == 3)
    {
        printf("Opeção escolhida foi: 3 \n");
    }
    else
    {
        printf("Opecao invalida \n");
    }



    //Exemplo mais pratico com um "switch case"
    switch (a)
    {
    case 1:
        printf("Opeção escolhida foi: 1 \n");
        break;
    case 2:
        printf("Opeção escolhida foi: 2 \n");
        break;

    case 3:
        printf("Opeção escolhida foi: 3 \n");
        break;
  
    default:
            printf("Opecao invalida \n");
        break;
    }


    switch (b)
    {
     case 'x':
        printf("A letra é x \n");
        break;


    default:
        printf("Opcao invalida \n");
        break;
    }



    return 0;
}