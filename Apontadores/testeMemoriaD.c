#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int TAM = 10;

    int *v, i;

    int *n;

    v = (int *) malloc ( sizeof(int));

    for (int i = 0; i < TAM; i++)
    {
        n = n + 1;

        v = (int *)realloc(v, (*n) * sizeof(int));

        &v[i] = n;
    }

    int j = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d \n", v[i]);
    }
}
