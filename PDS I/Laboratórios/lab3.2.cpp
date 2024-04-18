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
    A sequ�ncia de Fibonacci pode ser definida como:
    fib(0) = 0
    fib(1) = 1
    fib(n) = fib(n-1) + fib(n-2), para n>2
    Implementeumprogramaquecalculeas�riedeFibonacciparaumdeterminadon
    fornecidopelousu�rio.Voc�devearmazenaremumvetorcadaelementodas�rie,de
    formaqueaposi��o0armazeneotermo0,aposi��o1otermo1,eassimpordiante.
    Seuprogramadevereceberdousu�rioumn�meroentre0e800eimprimirotermo
    correspondenteaon�merorecebido.Ousu�riodevesercapazdeentrarcomv�rios
    n�meros interativamente emumamesmaexecu��o.Oprograma terminaquandoo
    usu�rio entrar com um n�mero negativo ou maior que 800.
    */

    long long numAnalise[801], nTermo = 0, numAntecessor, numAtencessor2, aux;

    //Repete todo o c�digo enquanto n�o for digitado um valor maior de 800 ou negativo
    while((nTermo <= 800) && (nTermo >= 0)){

        printf("Digite o termo n: ");
        scanf("%lld", &nTermo);

        if((nTermo > 800) || (nTermo < 0)){
            exit (0);
        }

        numAnalise[000] = 0;
        numAnalise[001] = 1;
        numAntecessor = 0;
        numAtencessor2 = 1;

        //fib(n) = fib(n-1) + fib(n-2), para n>2
        //fib(n-1) ==> Antecessor
        //fib(n-2) ==> Antecessor do Antecessor

        for(int i = 0; i < nTermo; i++){
            //Realiza a formula, basicamente utilizando a variavel antecessora e variavel "antecessora da antecessora -fib(n-2)
            aux = numAntecessor + numAtencessor2;

            //Armazena o valor de aux no vetor
            numAnalise[i + 1] = aux;
            //Repassa o valor da variavel antecessora para a variavel antecessora da antecessora, ou seja, antecessora 2 vezes fib(n-2)
            //Porque essa variavel tem sempre que estar 2 vezes a tr�s da variavel que estamos calculando no momento, novamente, fib(n-2)
            numAtencessor2 = numAntecessor;
            //Recebe o valor de aux, se tornando novamente a variavel antecessora, ou seja, a variavel fib(n-1)
            numAntecessor = aux;

        }

        printf("%lld\n", aux);

    }
    /*
    //Realiza a impress�o de todos os termos da matriz
    for(int i = 1; i <= nTermo; i++){
        printf("%d\n", numAnalise[i]);
    }
    */

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

