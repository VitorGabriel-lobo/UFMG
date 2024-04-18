#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar números aleatórios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Faça um programa que, dadas duas strings S1 e S2, concatena as duas e imprime a
    nova string gerada. A entrada consiste de duas string, uma em cada linha, as quais
    corresponderão, respectivamente, a S1 e S2.
    */

    char palavra1[255], palavra2[255];

    printf("Digite a primeira palavra: ");

    //Limpa o buffer
    setbuf(stdin, NULL);

    //Lê a string ou valor digitado
    gets(palavra1);

    printf("Digite a segunda palavra: ");

    //Lê a string ou valor digitado
    gets(palavra2);

    printf("%s%s\n", palavra1, palavra2);

    //Pausa o programa após executar
    system("pause");

    return 0;
}
