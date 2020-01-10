#include <stdio.h>
#include <stdlib.h>

#define TAM 3
int main()
{

    int vetor[TAM], cont;

    //passar valores para o vetor

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Popular o vetor

    for (cont = 0; cont < TAM; cont++)
    {
        vetor[cont] = vetor[cont] + 1;
    }

    printf("Posição 0: %d \n", vetor[0]);
    printf("Posição 1: %d \n", vetor[1]);
    printf("Posição 2: %d \n", vetor[2]);

    //Imprimir o vetor num laços de repetição ou ciclos

    for (cont = 0; cont < TAM; cont++)
    {
        printf("A posição %d do vetor tem o valor de %d \n", cont, vetor[cont]);
    }


    //Lervalores para o vetor
    for (cont = 0; cont < TAM; cont++)
    {
        printf("Insira valores no vetor");
        scanf ("%d", &vetor[cont]);
    }


      for (cont = 0; cont < TAM; cont++)
    {
        printf("A posição %d do vetor tem o valor de %d \n", cont, vetor[cont]);
    }

    return 0;
}
