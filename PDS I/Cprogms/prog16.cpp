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

void AnoBissexto(int anoDigitado){
    //Verifica se o ano digitado é bissexto
    if((anoDigitado % 400 == 0) || ((anoDigitado % 4 == 0) && (anoDigitado % 100 != 0))){
        printf("1\n");
    } else{
        printf("0\n");
    }
}


int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    6.4.Considere a seguinte definição de ano bissexto (ano no qual o mês de fevereiro tem 29 dias):
    1. Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;
    2. Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja, deixa resto diferente de zero;
    3. Pode ser que seja divisível por 400.
    Crie uma função com a lógica acima e implemente um programa que utilize tal função,
    lendo da entrada padrão uma série de números e imprima os resultados conforme
    condições abaixo:
    ● 0, caso o ano NÃO seja bissexto
    ● 1, caso o ano seja bissexto
    */

    int ano;

    printf("Digite a data desejada: ");
    scanf("%d", &ano);

    AnoBissexto(ano);

    //Pausa o programa após executar
    system("pause");

    return 0;
}

