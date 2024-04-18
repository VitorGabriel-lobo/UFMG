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
    //system("clear"); Para Linus
}

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /* 6.1. Escreva uma fun��o que recebe 3 par�metros inteiros correspondendo aos valores de
    dia, m�s e ano, respectivamente. A fun��o deve retornar o n�mero de dias j� transcorridos
    em rela��o � data de 17/09/2020, incluindo o dia final no c�lculo. Implemente um programa
    que utilize a fun��o pedida, lendo da entrada padr�o uma s�rie de datas e imprimindo o
    n�mero de dias conforme fun��o solicitada.
    */

    int dia, mes, ano, contAnoBis = 0, contAnoNaoBis, diferenca, ano2020 = 2020, resultAno;

    printf("Digite a data desejada: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    //Faz a diferen�a entre as datas
    diferenca = abs(ano - 2020);

    //Verifica a diferen�a entre as datas
    for(int i = 0;i <= diferenca;i++){
        //Verifica ano por ano se � bissexto
        if((ano2020 % 400 == 0) || ((ano2020 % 4 == 0) && (ano2020 % 100 != 0))){
            contAnoBis++;
        }
        //Verifica se o ano � maior ou menor que 2020, executando o c�digo de forma crescente ou decrescente
        //Ex.: 2020 2021 2022 2023 ou Ex.: 2020 2019 2018 2017
        if(ano > 2020){
            ano2020++;
        } else {
            ano2020--;
        }
    }

    contAnoNaoBis = abs(diferenca - contAnoBis); //Tirei o + 1 daqui, estou testando apenas com valores maiores que 2020

    //Esse resultado considera tanto o come�o do ano digitado at� o final, ou seja, n�o considera m�s e dia
    //Entretanto, esse 261 representa a data at� o dia 01/01 at� 17/01, o c�digo est� considerando o ano de 2020 todo
    if(ano < 2020){
        resultAno = (contAnoBis * 366) + ((contAnoNaoBis) * 365) - 106; // Tenho que entender sobre esse + 1
    } else if (ano > 2020){
        resultAno = (contAnoBis * 366) + (contAnoNaoBis * 365) - 261;
    } else if(ano = 2020){

    }

    printf("diferenca entre os anos: %d\n", diferenca);
    printf("Contador de ano bis: %d\n", contAnoBis);
    printf("resultAno antes do Switch: %d\n", resultAno);

    switch(mes){
        case 1: //janeiro
            resultAno = resultAno + 366 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 2: //fevereiro
            resultAno = resultAno + 336 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 3: //mar�o
            resultAno = resultAno + 308 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 4: //abril
            resultAno = resultAno + 277 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 5: //maio
            resultAno = resultAno + 247 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 6: //junho
            resultAno = resultAno + 216 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 7: //julho
            resultAno = resultAno + 186 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 8: //agosto
            resultAno = resultAno + 155 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 9: //setembro
            resultAno = resultAno + 124 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 10: //outubro
            resultAno = resultAno + 94 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 11: //novembro
            resultAno = resultAno + 63 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;

        case 12: //dezembro
            resultAno = resultAno + 33 - dia;
            printf("resultado dos anos: %d\n", resultAno);
            break;
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}





    /*C�digo antigo

    printf("diferenca entre os anos: %d\n", diferenca);
    printf("Contador de ano bis: %d\n", contAnoBis);

    if(ano > 2020){
        for(int i = 0;i <= diferenca;i++){
            if((ano2020 % 400 == 0) || ((ano2020 % 4 == 0) && (ano2020 % 100 != 0))){
                contAnoBis++;

            }
            ano2020++;
        }
    } else{ //Ano seja menor que 2020
        for(int i = 0;i <= diferenca;i++){
            if((ano2020 % 400 == 0) || ((ano2020 % 4 == 0) && (ano2020 % 100 != 0))){
                contAnoBis++;

            }
            ano2020--;
        }
    }*/
