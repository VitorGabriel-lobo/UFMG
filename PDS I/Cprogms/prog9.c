#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar números aleatórios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os números de 10 até 0
    // de forma regressiva, usando dowhile, while e for

    int i = 10;

    do{
        printf("%d\n", i);
        i--;
    }while(i >= 0);

    i = 10;

    while(i >= 0){
        printf("%d\n", i);
        i--;
    }

    for(i = 10;i >= 0; i--){
        printf("%d\n", i);
    }






    system("pause");
    return 0;
}


