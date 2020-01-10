#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    //Definir variáveis

    int a;
    float b;
    char c;
    bool d;

    //Passando valores

    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrever no ecrã

    printf(" O valor de a = %d \n", a);

    printf(" O valor de b = %.2f \n", b);

    printf(" O valor de c = %c \n", c);

    printf(" O valor de d = %d \n", d);


    //Ler Valores do teclado
    printf("Atribuir um novo valor a vareável a: \n");
    scanf("%d", &a);

    printf("Atribuir um novo valor a vareável b: \n");
    scanf("%f", &b);

    printf("Atribuir uma letra á vareável c: \n");
    // Quando se for ler um char é nessario deixar um espaço no inicio das plicas
    scanf(" %c", &c);

    printf("Atribuir um novo valor a vareável d: \n");
    scanf("%d", &d);


    //Escrever o novo valor da vareavel "a" no ecra
    printf(" O novo valor da vareável a é: %d \n", a);

    //Escrever o novo valor da vareavel "a" no ecra
    printf(" O novo valor da vareável b é: %.2f \n", b);

    //Escrevendo o valor de C no ecra
    printf("O valor de C é: %c \n", c);


    printf(" O valor de d = %d \n", d);

    return 0;
}