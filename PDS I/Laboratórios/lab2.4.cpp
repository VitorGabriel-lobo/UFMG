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
    Fa�a um programa que compute quantos s�o os m�ltiplos de 2, de 3 e de 5 entre 1 e X;
    compute tamb�m quantos s�o os n�meros m�ltiplos de 2, 3 e 5 ao mesmo tempo.
    (utilize while())
    � fornecido o valor de X onde deve ser impresso a quantidade de m�ltiplos conforme
    abaixo.
    */

    int x, mult2 = 0, mult3 = 0, mult5 = 0, multTodos = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    while(x >= 1){
        if(x % 2 == 0){
            mult2++;
        }
        if(x % 3 == 0){
            mult3++;
        }
        if(x % 5 == 0){
            mult5++;
        }
        if((x % 2 == 0) && (x % 3 == 0) && (x % 5 == 0)){
            multTodos++;
        }

        x--;
    }

    printf("M�ltiplos de 2: %d", mult2);
    printf("\nM�ltiplos de 3: %d", mult3);
    printf("\nM�ltiplos de 5: %d", mult5);
    printf("\nM�ltiplos de todos: %d\n", multTodos);

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

