#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa para ler um vetor X de 10 elementos e gerar um outro vetor com
    esses 10 elementos em ordem inversa. Exemplo: Se X= {3, 5, 2, 8, 4}, dever� ser
    gerado um vetor Y= {4, 8, 2, 5, 3}. O valor de n � lido pelo teclado.
    Cada posi��o do vetor deve ser impressa em uma linha atrav�s do �\n�.
    */

    int x[10], y[10], aux = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d� elemento do vetor: ", i);
        scanf("%d", &x[i]);
    }

    for(int i = 9; i >= 0; i--){
        //y[i] = x[9 - i];

        y[aux] = x[i];
        printf("%d\n", y[aux]);
        aux++;
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

