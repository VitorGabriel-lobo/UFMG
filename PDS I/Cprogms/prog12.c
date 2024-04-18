#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar números aleatórios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 valores para um vetor de 3 posições
    //e depois calcule a média dos valores acessando o vetor

    int tam;

    printf("Qual sera o tamanho do vetor? \nR: ");
    scanf("%d", &tam);

    float vetor[tam], result;

    for(int i = 0; i < tam; i++){
        printf("Digite o %d valor: ", i);
        scanf("%f", &vetor[i]);
        result = result + vetor[i];
    }

    printf("\nResultado: %.2f\n", result/tam);

    system("pause");
    return 0;
}
