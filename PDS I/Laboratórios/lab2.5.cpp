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
    Faça um programa que pegue um número do teclado e calcule a soma de todos os
    números de 1 até ele (use laço for()). Ex.: o usuário entra 7, o programa vai mostrar 28,
    pois 1+2+3+4+5+6+7=28.
    */

    int numDigitado, acumulador = 0;

    printf("Digite um numero: ");
    scanf("%d", &numDigitado);

    for(int i = 1; i <= numDigitado; i++){
        acumulador += i;
    }

    printf("Resultado: %d\n", acumulador);

    /*//Forma de fazer de modo decrescente
    int aux;
    aux = numDigitado;
    for(int i = 0; i <= aux; i++){
        acumulador = acumulador + numDigitado;
        numDigitado--;
    }*/

    //Pausa o programa após executar
    system("pause");

    return 0;
}

