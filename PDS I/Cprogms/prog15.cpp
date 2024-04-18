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
    //system("clear"); Para Linus
}

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /* 6.1. Escreva uma função que recebe 3 parâmetros inteiros correspondendo aos valores de
    dia, mês e ano, respectivamente. A função deve retornar o número de dias já transcorridos
    em relação à data de 17/09/2020, incluindo o dia final no cálculo. Implemente um programa
    que utilize a função pedida, lendo da entrada padrão uma série de datas e imprimindo o
    número de dias conforme função solicitada.
    */

    int dia, mes, ano, contAnoBis = 0, contAnoNaoBis, diferenca, ano2020 = 2020, resultAno;

    printf("Digite a data desejada: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    //Faz a diferença entre as datas
    diferenca = abs(ano - 2020);

    //Verifica a diferença entre as datas
    for(int i = 0;i <= diferenca;i++){
        //Verifica ano por ano se é bissexto
        if((ano2020 % 400 == 0) || ((ano2020 % 4 == 0) && (ano2020 % 100 != 0))){
            contAnoBis++;
        }
        //Verifica se o ano é maior ou menor que 2020, executando o código de forma crescente ou decrescente
        //Ex.: 2020 2021 2022 2023 ou Ex.: 2020 2019 2018 2017
        if(ano > 2020){
            ano2020++;
        } else {
            ano2020--;
        }
    }

    contAnoNaoBis = abs(diferenca - contAnoBis); //Tirei o + 1 daqui, estou testando apenas com valores maiores que 2020

    //Esse resultado considera tanto o começo do ano digitado até o final, ou seja, não considera mês e dia
    //Entretanto, esse 261 representa a data até o dia 01/01 até 17/01, o código está considerando o ano de 2020 todo
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

        case 3: //março
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

    //Pausa o programa após executar
    system("pause");

    return 0;
}





    /*Código antigo

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
