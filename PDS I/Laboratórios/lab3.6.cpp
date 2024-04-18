#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Chama-se matriz oposta de A a matriz �A cuja soma com A resulta na matriz nula.
    Exemplo: Dada a matriz:
    A oposta de A ser�
    pois:
    Fa�a um programa que receba como entrada os valores de uma matriz n x m e
    imprima sua matriz oposta. O formato de entrada � similar ao exerc�cio anterior. Obs:
    Para a sa�da, deve se imprimir os valores separados por um espa�o simples.
    */

    int numLinhas, numColunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numLinhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &numColunas);

    //Define o tamanho da matriz
    int matriz[numLinhas][numColunas];

    //Percorre todos os elementos da matriz
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            //matriz[i][j] = matriz[i][j] * -1;
            //Ou seja, transforma o elemento x em -x, gerando a matriz oposta
            matriz[i][j] *= -1;
        }
    }

    //realiza a impress�o da oposta
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
