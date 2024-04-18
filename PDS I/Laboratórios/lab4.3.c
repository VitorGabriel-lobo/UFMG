#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa que substitua a primeira ocorr�ncia do caractere C1 na string S
    pelo caractere C2. A entrada consiste em uma string, o caractere C1 e o caractere C2,
    nessa ordem.
    Seu programa deve imprimir a string ap�s a substitui��o.
    */

    char palavra[255], caractereVelho, caractereNovo;

    printf("Digite a palavra: ");

    //Limpa o buffer
    setbuf(stdin, NULL);

    //L� a string ou valor digitado
    gets(palavra);

    printf("Digite o caractere que deseja substituir: ");
    scanf("%c", &caractereVelho);

    printf("Digite o caractere novo: ");
    setbuf(stdin, NULL);
    scanf("%c", &caractereNovo);

    //Percorre a string buscando o caractere velho
    for(int i = 0; i <= strlen(palavra); i++){

        //Verifica se aquele valor do vetor da string � igual ao caractere
        if(palavra[i] == caractereVelho){

            //Substitui o valor antigo pelo novo caractere digitado pelo usu�rio
            palavra[i] = caractereNovo;

            //Sai do if e do for assim que encontra o primeiro valor
            break;
        }
    }

    //printf("%s\n", palavra);

    for(int i = 0; i <= (strlen(palavra)-1); i++){
        printf("%c", palavra[i]);
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}
