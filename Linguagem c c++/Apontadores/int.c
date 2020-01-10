#include <stdio.h>
#include <stdlib.h>

int returnaValor(){

    return 10;

}

int main(int argc, char const *argv[])
{
    int a; 


    a = returnaValor();

    printf("O valor de a é %d \n", a);
    


    return 0;
}
