#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 1;


    //primeiro execut as instruções uma ves depois confere a condição
    do
    {

        printf("a = %d \n", a);

        a++;

    } while (a <= 10);

    return 0;
}