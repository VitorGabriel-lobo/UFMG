#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima os n�meros de 10 at� 0
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


