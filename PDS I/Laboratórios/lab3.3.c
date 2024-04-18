#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar números aleatórios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Faça um programa para ler um vetor X de 10 elementos e gerar um outro vetor com
    esses 10 elementos em ordem inversa. Exemplo: Se X= {3, 5, 2, 8, 4}, deverá ser
    gerado um vetor Y= {4, 8, 2, 5, 3}. O valor de n é lido pelo teclado.
    Cada posição do vetor deve ser impressa em uma linha através do “\n”.
    */

    int x[10], y[10], aux = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº elemento do vetor: ", i);
        scanf("%d", &x[i]);
    }

    for(int i = 9; i >= 0; i--){
        //y[i] = x[9 - i];

        y[aux] = x[i];
        printf("%d\n", y[aux]);
        aux++;
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}

