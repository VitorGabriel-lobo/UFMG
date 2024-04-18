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
    Implemente um programa que imprima todos os termos da s�rie dado n, e os termos x0
    e x1. Os outros termos da s�rie ser�o:
    xn = 4*xn-1
    -2*xn-2
    O primeiro valor � referente � vari�vel n, ou seja, o valor de termos da s�rie, seguida de
    (X0) e (X2). O programa deve imprimir o valor de cada termo at� o en�simo termo. No
    exemplo abaixo, com o valor de n=4, x0=3 e x1=4, o programa deve imprimir o valor de
    x0, x1, x2, x3 e x4.

    */

    int n, x0, x1, xn1, xn2, aux;

    printf("Digite o n: ");
    scanf("%d", &n);
    printf("Digite o x0: "); //recebe o x0
    scanf("%d", &xn2);
    printf("Digite o x1: "); //recebe o x1
    scanf("%d", &xn1);

    //xn1 antecessor
    //xn2 antecessor do antecessor

    /*
    Basicamente, xn1 � o antecessor do n�mero que voc� deseja, enquanto o xn2 � o antecessor do antecessor
    Nesse sentido, quando vamos calcular o x2 teremos a seguinte formula: x2 = 4 * x1 - 2 * x0
    Para calcular o x3: x3 = 4 * x2 - 2 * x1
    Portanto, a partir de calculado o x2, para calcular o x3, ainda vou precisar ter as variaveis do x2 e x1 guardas
    e sucessivamente.
    */

    for(int i = 0; i <= n; i++){
        if(i == 0){ //imprime a variavel x0
            printf("X%d: %d\n", i, xn2);
        } else if (i == 1){ //imprime a variavel x1
            printf("X%d: %d\n", i, xn1);
        } else{
            //Realiza a express�o solicitada, mas n�o � capaz de imprimir o X0 e X1
            aux = 4 * xn1 - 2 * xn2;
            printf("X%d: %d\n", i, aux);

            //Recebe a vari�vel antecessor do antecessor, ou seja, 2 variaveis para tr�s
            xn2 = xn1;
            //Recebe a variavel que acabei de calcular, em outras palavras, para o pr�ximo xn, recebe a variavel antecessora
            xn1 = aux;
        }
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

