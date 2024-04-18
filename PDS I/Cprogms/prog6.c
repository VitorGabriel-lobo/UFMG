#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 notas e calcule  a média entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //senão foi reprovado

    //Definindo variaveis
    float val1, val2, val3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);

    printf("Digite o segundo valor: ");
    scanf("%f", &val2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &val3);

    if(((val1+val2+val3)/3) >= 7){
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado!");
    }

    return 0;
    system("pause");
}
