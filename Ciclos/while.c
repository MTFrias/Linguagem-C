#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int a = 1, b = 10;

    //Contar até 10
    while (a <= 10)
    {

        printf("a = : %d \n", a);

      //  a = a + 1;
        a++;
    }

    while (b >= 1 )
    {

        printf("b = : %d \n", b);
 
        //b = b - 1;
          b--;   
    }

    return 0;
}
