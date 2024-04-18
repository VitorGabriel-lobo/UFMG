#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 notas e mostre a média entre elas

    float var1, var2;

    printf("Digite o primeio valor: ");
    scanf("%f", &var1);

    printf("Digite o segundo valor: ");
    scanf("%f", &var2);

    printf("Média: %f", (var1+var2)/2);
}












