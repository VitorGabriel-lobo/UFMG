#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar números aleatórios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
         0   1
         |   |
    0 - [1] [2]
    1 - [4] [3]
    ORDEM DE EXECUÇÃO DE DOIS FOR: 0,0 ; 0,1 ; 1,0 ; 1,1
    */

    //Prencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha

    int matriz[2][2], aux[2][2];

    //Digita o valor da matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Digite o valor "  << i << j << ": ";
            cin >> matriz[i][j];
            aux[i][j] = matriz[i][j];
        }
    }

    /*
    for(int i = 0; i <= 1; i++){
        matriz[0][i] = aux[1][i];
    }

    for(int i = 0; i <= 1; i++){
        matriz[1][i] = aux[0][i];
    }*/

    //Imprime a matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }cout << "\n";

    //Inverte a matriz
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <=1; j++ ){
            matriz[1][i] = aux[0][i];
        }
        matriz[0][i] = aux[1][i];
    }

    //Imprime a matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}
