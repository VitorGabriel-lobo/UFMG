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
    Faça um programa que mostre uma contagem na tela de 233 a 457, só que contando de
    3 em 3 quando estiver entre 300 e 400 e de 5 em 5 quando não estiver. (utilize
    do{}while())
    */

    int contagem = 233;

    do{
        printf("%d\n", contagem);

        if(contagem < 300 || contagem > 400){
            contagem += 5;
        } else{
            contagem += 3;
        }

    }while(contagem <= 457);




    //Pausa o programa após executar
    system("pause");

    return 0;
}

