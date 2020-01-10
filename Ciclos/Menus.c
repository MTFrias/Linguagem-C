#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opecao;

    while (opecao < 1 || opecao > 3)
    {
        //Interface do menu
        printf("Escolha uma opeção: \n");
        printf("1-Opeção 1 \n");
        printf("2-Opeção 2 \n");
        printf("3-Opeção 3 \n");

        scanf("%d", &opecao);

        switch (opecao)
        {
        case 1:
            printf("Entrou na op 1 \n");
            break;
        case 2:
            printf("Entrou na op 2 \n");
            break;
        case 3:
            printf("Entrou na op 3 \n");
            break;

        default:
            printf("Opeção Invalida \n");
            break;
        }
    }

    return 0;
}