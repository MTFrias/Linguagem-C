#include <stdio.h>
#include <stdlib.h>


//Função que edita o valor na memoria sem returnar nada.
void aumentaDez(int *numero){

    *numero = *numero +10;
}


int main(int argc, char const *argv[])
{
    int a = 5;

     printf("Valor de a: %d \n", a);

    //Função que aumenta 10 diretamente

    aumentaDez(&a);

    printf("Valor de a depois da função: %d \n", a);

    return 0;
}

