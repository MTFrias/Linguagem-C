#include <stdio.h>
#include <stdlib.h>



int main() {


    //definir var
    int a = 6;
    int b = 4;

    printf("A soma de %d e %d = %d \n", a,b, a + b);

    printf("A subtracao de %d e %d = %d \n", a, b, a - b);

    printf("A divisao de %d e %d = %d \n", a, b, a / b);

    printf("A multiplicacao de %d e %d = %d \n", a, b, a * b);


    //Resto da divisão (sinal de %)
    printf("O resto da divisao entre %d e %d = %d \n", a, b, a % b);


    //Valor absoluto o abs vai sempre transformar uma valor em positivo

    printf("O valor absoluto de -3 = %d ", abs(-3));


    
    return 0;
}