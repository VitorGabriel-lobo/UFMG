#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas

    float var1, var2, res;

    printf("Digite o primeiro valor: ");
    scanf("%f", &var1);

    printf("Digite o segundo valor: ");
    scanf("%f", &var2);

    res = abs(var1 - var2);

    printf("Valor absoluto da diferença das notas: %f", res);

    return 0;s

}
