#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Testar variavel booleana
#include <time.h> //gerar n�meros aleat�rios

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que informe se o n�mero � primo ou n�o

    int valor, i, cont = 0;

    printf("Digite o n�mero: ");
    scanf("%d", &valor);

    for(i = 1;i <= valor; i++){
        //Exibe o resto da divis�o na tela
        printf("%d / %d resto = %d\n", valor, i, valor%i);
        //Conferindo quantas vezes houve a divisibilidade
        if((valor%i) == 0){
            cont++;
        }
    }

    //Verifica se foi apenas 2 vezes que houve a divisibilidade
    if(cont == 2){
            printf("Eh primo!\n");
        } else{
            printf("Nao eh primo! Pois ele tem %d divisores!\n", cont);
        }

    system("pause");
    return 0;
}
