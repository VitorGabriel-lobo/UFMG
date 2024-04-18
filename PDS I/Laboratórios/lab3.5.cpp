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
    Fa�a um programa que encontre o maior elemento de uma matriz. Inicialmente �
    fornecido o n�mero de linhas e colunas da matriz. Em seguida, os valores de cada
    posi��o da matriz s�o informados em uma linha separada por espa�os simples.
    */

    int numLinhas, numColunas, aux;

    printf("Digite o numero de linhas: ");
    scanf("%d", &numLinhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &numColunas);

    //Define o tamanho do vetor, com base no valor digitado
    int vetor[numLinhas][numColunas];

    //Percorre as linhas, mas fica em stand by enquanto o sistema ainda est� percorrendo as colunas
    for(int i = 0; i < numLinhas; i++){
        //Percorre as colunas, o c�digo percorre todas as colunas primeiro para depois passar para pr�xima linha
        for(int j = 0; j < numColunas; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &vetor[i][j]);
        }
    }

    //Variavel aux recebe o valor de vetor[0][0], para garantir em casos que digitem vetores com valores totalmente negativos
    aux = vetor[0][0];

    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            //Verifica se o valor daquele elemento do vetor � maior que o meu valor de aux atual
            if(aux < vetor[i][j]){
                aux = vetor[i][j];
            }
        }
    }

    printf("O maior elemento eh %d\n", aux);

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

