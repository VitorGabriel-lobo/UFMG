#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa que, dadas duas strings S1 e S2, concatena as duas e imprime a
    nova string gerada. A entrada consiste de duas string, uma em cada linha, as quais
    corresponder�o, respectivamente, a S1 e S2.
    */

    char palavra1[255], palavra2[255];

    printf("Digite a primeira palavra: ");

    //Limpa o buffer
    setbuf(stdin, NULL);

    //L� a string ou valor digitado
    gets(palavra1);

    printf("Digite a segunda palavra: ");

    //L� a string ou valor digitado
    gets(palavra2);

    printf("%s%s\n", palavra1, palavra2);

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
