#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[2][2], i, j;

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;


    //introduzor valores para a matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
           scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \n", matriz[i][j]);
        }
    }

    return 0;
}