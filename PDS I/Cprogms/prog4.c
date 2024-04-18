#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 números inteiros de uma só vez e
    //coloque o resultado da multiplicação entre os 3 em uma variavel propria
    //depois exiba essa variavel

    int var1, var2, var3, res;

    printf("Digite as 3 variaveis: ");
    scanf("%d %d %d",&var1,&var2,&var3);

    res = var1 * var2 * var3;

    printf("Resultado da multiplicação: %d", res);

    return 0;
}
