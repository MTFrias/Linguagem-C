#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a = 20;

    //AND, se uma comparação for falsa não entra no bloco
    if(a > 5 && a <15){

        printf("A variavel está entre 5 e 15 \n");
    }

      //OR, se uma comparação for verdadeira entra no bloco
    if(a > 5 || a > 15){

        printf("A variavel  é maior que 5 ou maior que 15 \n");
    }

       if((a > 5 && a <15 )|| a == 20){

        printf("A variavel está entre 5 e 15 ou então vale 20 \n");
    }


    return 0;
}