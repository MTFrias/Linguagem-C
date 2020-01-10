#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{


    //Gerar numero aleatorio
    srand((unsigned int) time(NULL));

    //Variável que recebe o resto da divisão do número por 3 (aleatorio entre 0 e 2), 
    //qualquer numero dividido por 3 tem resto 0, 1 ou 2;

    int aleatorio = rand() % 3;

    printf("%d \n", aleatorio);

    //Variável que recebe o resto da divisão do número por 5 (aleatorio entre 1 e 5), 
    //qualquer numero dividido por 3 tem resto 0, 1 ou 2;
    int aleatorioSegundo = (rand() % 5) +1;
    
    printf("%d \n", aleatorioSegundo);


    return 0;
}
