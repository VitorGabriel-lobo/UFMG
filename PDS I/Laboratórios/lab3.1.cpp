#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar números aleatórios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

//Função limpa tela
void limpaTela(){
    system("CLS"); //Para Windows
    //system("clear"); //Para Linux
}

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Faça um programa para imprimir todos os números primos num intervalo entre A e B,
    sendo A e B números inteiros positivos e menores que 10000. A e B devem ser
    fornecidos pelo usuário do seu programa.
    A entrada consiste em dois números inteiros que representam o intervalo A e B
    */

    int numA, numB, cont = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &numA);
    printf("Digite o segundo número: ");
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

    //Pausa o programa após executar
    system("pause");

    return 0;
}

