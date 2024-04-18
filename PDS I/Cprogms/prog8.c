#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 valores e depois
    //crie um menu de 4 opcoes:
    //1-somar, 2-subtrair, 3-dividir, 4-multiplicar
    //Depois que o usuário escolher a opção, mostre o resultado
    //com os dois valores escolhidos

    int opcao = 0;
    float val1, val2;

    printf("Digite o 1 número: ");
    scanf("%f", &val1);

    printf("Digite o 2 número: ");
    scanf("%f", &val2);

    do{
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Dividir\n");
        printf("4 - Multiplicar\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
    }while(opcao > 4 || opcao < 1);

    switch(opcao){
        case 1:
            printf("\n%.2f + %.2f = %.2f \n", val1, val2,val1+val2);
            break;
        case 2:
            printf("\n%.2f - %.2f = %.2f \n", val1, val2,val1-val2);
            break;
        case 3:
            printf("\n%.2f / %.2f = %.2f \n", val1, val2,val1/val2);
            break;
        case 4:
            printf("\n%.2f * %.2f = %.2f \n", val1, val2,val1*val2);
        break;
    }

    system("pause");
    return 0;
}


