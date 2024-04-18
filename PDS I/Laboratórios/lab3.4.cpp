#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em português
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar números aleatórios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Faça um programa que leia dois vetores de inteiros representando o número de
    matrícula de alunos matriculados respectivamente em AEDS 1 e Cálculo 1. Em
    seguida, o programa deverá imprimir o número de matrícula dos alunos que estão
    matriculados simultaneamente nestas duas disciplinas (ou seja, calcular a interseção
    dos dois vetores).
    O primeiro valor se refere à quantidade de alunos na disciplina de AEDS 1. Em
    seguida, são informadas as matrículas de cada aluno na disciplina. A mesma
    sequência é fornecida para a disciplina de Cálculo 1. Por fim, deve-se imprimir a
    matrícula dos alunos que estão matriculados em ambas disciplinas.

    */


    int numAlunosAEDS, numAlunosCalculo;

    //Solicita o numero de alunos de AEDS
    printf("Digite o numero de alunos de AEDS I: ");
    scanf("%d", &numAlunosAEDS);

    //Define o tamanho do vetor, com base no valor digitado
    int alunosAEDS[numAlunosAEDS];

    //Insere em cada posição o número da matricula
    for(int i = 0; i < numAlunosAEDS; i++){
        printf("Matricula do aluno %d: ", i);
        scanf("%d", &alunosAEDS[i]);
    }

    //Solicita o numero de alunos de Calculo
    printf("Digite o numero de alunos de Calculo I: ");
    scanf("%d", &numAlunosCalculo);

    //Define o tamanho do vetor, com base no valor digitado anteriormente
    int alunosCalculo[numAlunosCalculo];

    //Insere em cada posição o numero da matricula
    for(int i = 0; i < numAlunosCalculo; i++){
        printf("Matricula do aluno %d: ", i);
        scanf("%d", &alunosCalculo[i]);
    }

    //Ideia de como tem que funcionar a comparação,
    //Basicamente, vetor inicial pode ficar "parado" enquanto o outro vai alterando
    //até finalizar a quantidade de elementos desse segundo vetor, quando ele finaliza
    //o vetor inicial tem que ser alterado. Ex.:
    //if(alunosAEDS[0] = alunosCalculo[0])?
    //if(alunosAEDS[0] = alunosCalculo[1])?
    //if(alunosAEDS[0] = alunosCalculo[2])? e etc
    //if(alunosAEDS[1] = alunosCalculo[0])?
    //if(alunosAEDS[1] = alunosCalculo[1])?
    //if(alunosAEDS[1] = alunosCalculo[2])?

    //OBS.: Para ajudar a entender, é só pensar em como percorrer uma matriz, é basicamente a mesma ideia

    //Percore o primeiro vetor, deixando ele "parado" até o for de dentro acabar de verificar
    for(int i = 0; i < numAlunosAEDS; i++){
        //Vai alterando o vetor secundario e comparando, com o vetor primeiro fixo, quando esse for acabar é que o vetor primeiro é alterado
        for(int j = 0; j < numAlunosCalculo; j++){
            //Realiza a comparação se o vetor primeiro é igual ao vetor segundo (que está se alterando)
            if(alunosAEDS[i] == alunosCalculo[j]){
                printf("AEDS %d / Calculo %d ---------- Matricula aluno em comum: %d\n", alunosAEDS[i], alunosCalculo[j], alunosCalculo[j]);
            }
        }
    }

    //Pausa o programa após executar
    system("pause");

    return 0;
}

