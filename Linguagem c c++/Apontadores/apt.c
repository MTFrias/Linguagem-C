#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 20;


    //imprimir o valor da vareavel;

    printf("Valor de a: %d \n", a);
    
    //Ler o endereço da memoria
    printf("Endereço da memoria a é: %d \n", &a);

    //as vareaveis armazenam valores, ponteiros armazam posições da memoria
    int b = 10;

    int *ponteiro;

    ponteiro = &b; //O apontador recebe a posição da memoria da vareavel b


    //imprimir o valor da vareavel b;

    printf("Valor de b: %d \n", b);


    //* pode ser lido como conteudo apontado por
    *ponteiro = 40;

        printf("Valor de b: %d \n", b);
    



    return 0;
}