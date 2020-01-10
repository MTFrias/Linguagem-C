#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 5, op =2;
    float b = 2.5;
     char c = 'x';
    //condições
    if (a == 5)
    {

        printf("A veriavel a é = 5 \n");
    }

    if (b == 2.5)
    {

        printf("A veriavel b é = 2.5 \n");
    }

    if (c == 'x')
    {

        printf("A veriavel c é = letra x\n");
    }

    //Numero par ou impar
    if (a % 2 == 1)
    {
      printf("A veriavel a é impar\n");
    }
    else
    {
     printf("A veriavel é par\n");
    }



    if(op == 1){

        printf("\nA opeção é igual a 1\n");
    }else if (op == 2){

        printf("\nA opeção é igual a 2\n");
    }else{
        printf("A opeção não é igual a 1 nem a 2 \n");
    }
    
        
    

    return 0;
}