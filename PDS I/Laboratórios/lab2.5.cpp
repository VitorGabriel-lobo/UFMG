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
    Fa�a um programa que pegue um n�mero do teclado e calcule a soma de todos os
    n�meros de 1 at� ele (use la�o for()). Ex.: o usu�rio entra 7, o programa vai mostrar 28,
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

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

