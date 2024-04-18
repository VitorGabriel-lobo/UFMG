#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar números aleatórios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Chama-se matriz oposta de A a matriz –A cuja soma com A resulta na matriz nula.
    Exemplo: Dada a matriz:
    A oposta de A será
    pois:
    Faça um programa que receba como entrada os valores de uma matriz n x m e
    imprima sua matriz oposta. O formato de entrada é similar ao exercício anterior. Obs:
    Para a saída, deve se imprimir os valores separados por um espaço simples.
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

    //realiza a impressão da oposta
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}
