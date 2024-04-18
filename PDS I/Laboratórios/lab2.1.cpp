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
    Implemente um programa que imprima todos os termos da série dado n, e os termos x0
    e x1. Os outros termos da série serão:
    xn = 4*xn-1
    -2*xn-2
    O primeiro valor é referente à variável n, ou seja, o valor de termos da série, seguida de
    (X0) e (X2). O programa deve imprimir o valor de cada termo até o enésimo termo. No
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
    Basicamente, xn1 é o antecessor do número que você deseja, enquanto o xn2 é o antecessor do antecessor
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
            //Realiza a expressão solicitada, mas não é capaz de imprimir o X0 e X1
            aux = 4 * xn1 - 2 * xn2;
            printf("X%d: %d\n", i, aux);

            //Recebe a variável antecessor do antecessor, ou seja, 2 variaveis para trás
            xn2 = xn1;
            //Recebe a variavel que acabei de calcular, em outras palavras, para o próximo xn, recebe a variavel antecessora
            xn1 = aux;
        }
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}

