#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

//Fun��o limpa tela
void limpaTela(){
    system("CLS"); //Para Windows
    //system("clear"); //Para Linux
}

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa para imprimir todos os n�meros primos num intervalo entre A e B,
    sendo A e B n�meros inteiros positivos e menores que 10000. A e B devem ser
    fornecidos pelo usu�rio do seu programa.
    A entrada consiste em dois n�meros inteiros que representam o intervalo A e B
    */

    int numA, numB, cont = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numA);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numB);

    while(numA <= numB){
        for(int i = 1;i <= numA; i++){
            //Conferindo quantas vezes houve a divisibilidade
            if((numA%i) == 0){
                cont++;
            }
        }
        //Verifica se foi apenas 2 vezes que houve a divisibilidade
        if(cont == 2){
            printf("%d\n", numA);
        }
        cont = 0;
        numA++;
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

