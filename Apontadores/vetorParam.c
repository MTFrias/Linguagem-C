#include <stdio.h>
#include <stdlib.h>

void imprimirVetor(int *vetor, int tamanho)
{

    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d \n", vetor[i]);
        /* code */
    }
}

void modificaVetor(int *vetor, int tamanho)
{

    int i;

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = vetor[i] + 1;
    }
}

int main(int argc, char const *argv[])
{
    //Definir vetor

    int v[3] = {1, 2, 3};

    imprimirVetor(v, 3);

    modificaVetor(v, 3);

    imprimirVetor(v, 3);

    return 0;
}
