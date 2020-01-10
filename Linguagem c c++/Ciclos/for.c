#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont;

    for (cont = 0; cont <= 10; cont++)
    {

        printf("%d \n", cont);
    }

    for (cont = 0; cont <= 10; cont++)
    {

        printf(" 5 x %d = %d \n", cont, 5 * cont);
    }

    for (cont = 0; cont <= 10; cont = cont + 2)
    {

        printf("%d \n", cont);
    }

    return 0;
}