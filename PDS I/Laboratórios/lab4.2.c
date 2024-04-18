#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa para imprimir uma string ao contr�rio. A entrada ser� uma �nica
    string e seu programa deve imprimir ela invertida
    */

    char palavra[255];

    printf("Digite a palavra: ");

    //Limpa o buffer
    setbuf(stdin, NULL);

    //L� a string ou valor digitado
    gets(palavra);

    //strlen(palavra) ==> Comando que verifica a quantidade de caracteres que tem a palavra
    //Nessa l�gica, esse c�digo basicamente verifica a quantidade de caracteres e vai subtraindo pelo i, ou seja, Ex.: palavra "onibus"
    //strlen = 6 e o i come�a pelo valor um, pois se voc� fizer
    //strlen = 6 - 0 = i ===> " ", ou seja, um espa�o em branco

    //strlen = 6 - 1 = i ===> 6 - 1 = 5 ===> s
    //strlen = 6 - 2 = i ===> 6 - 2 = 4 ===> u
    //strlen = 6 - 3 = i ===> 6 - 3 = 3 ===> b
    //strlen = 6 - 4 = i ===> 6 - 4 = 2 ===> i
    //strlen = 6 - 5 = i ===> 6 - 5 = 1 ===> n
    //strlen = 6 - 6 = i ===> 6 - 6 = 0 ===> o

    for(int i = 1; i <= strlen(palavra); i++){
        //palavra[strlen(palavra) - i]

        printf("%c", palavra[strlen(palavra) - i]);
    }


    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
