#include <stdlib.h>
#include <stdio.h>
#include <string.h> //biblioteca que tem a função strlen, para limpar o excesso de momoria não utilizada

int main()
{

    char palavra[255];

    printf("Digite uma palavra \n");

    //limpar o buffer do teclado em primeiro lugar
    setbuf(stdin, 0); // stdin é standard input (teclado)

    // Lê a string
    fgets(palavra, 255, stdin);

    //[F][R][I][A][S][][][][]...[\0]

    //Limpar a memoria que não está a ser utilizada
    palavra[strlen(palavra) - 1] = '\0'; //colocar o \0 asseguir à ultima letra digitada, o \0 indica que é o fim da memória

    printf("A sua palavra é: %s \n", palavra);

    /*Após a leitura de um tipo CHAR quando se carrega ENTER o C entende que  inseriu "\n", e 
    dessa forma o próximo SCANF é automaticamente preenchido com um '\n' 
    por isso não funciona, de forma que sempre que você usar um scanf
     de char deve colocar em seguida um getchar() ou fflush(stdin), 
     o getchar é mais simples, exemplo :

    scanf("%c", palavra); //insere a palavra;

    getchar(); // limpa o \n do enter;

    scanf("%d", numero); // lê normalmente o numero;
*/
    return 0;
}