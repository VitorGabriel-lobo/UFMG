#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar n�meros aleat�rios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Definindo uma String
    string palavra;

    //Imrpimindo na tela
    cout << "Digite uma palavra: ";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma vari�vel
    cout << "\nA palavra eh: " << palavra;

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
