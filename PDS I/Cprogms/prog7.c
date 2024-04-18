#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 valores e informe se eles são
    //iguais entre si para formarem os lados de um triangulo equilatero

    //Definindo variaveis
    int val1, val2, val3;

    printf("Digite o valor 1: ");
    scanf("%d", &val1);

    printf("Digite o valor 2: ");
    scanf("%d", &val2);

    printf("Digite o valor 3: ");
    scanf("%d", &val3);

    if(val1 == val2 && val1 == val3){
        printf("É possível formar um triangulo");
    } else {
        printf("Não é possível formar um triangulo");
    }



    system("pause");
    return 0;
}


