#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar números aleatórios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os números pares de 10 a 20
    //usando dowhile, while e for

    int i = 10;

    do{
        printf("%d\n", i);
        i = i + 2;
    }while(i <= 20);

    i = 10;

    while(i <= 20){
        printf("%d\n", i);
        i = i + 2;
    }

    for(i = 10; i <= 20; i = i + 2){
        printf("%d\n", i);
    }



    system("pause");
    return 0;
}


