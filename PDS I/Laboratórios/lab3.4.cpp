#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Colocar texto em portugu�s
#include <stdbool.h> //Trabalar com variaveis booleanas
#include <time.h> //gerar n�meros aleat�rios
#include <string> //C++ Strings
#include <iostream>

using namespace std;

int main (){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    /*
    Fa�a um programa que leia dois vetores de inteiros representando o n�mero de
    matr�cula de alunos matriculados respectivamente em AEDS 1 e C�lculo 1. Em
    seguida, o programa dever� imprimir o n�mero de matr�cula dos alunos que est�o
    matriculados simultaneamente nestas duas disciplinas (ou seja, calcular a interse��o
    dos dois vetores).
    O primeiro valor se refere � quantidade de alunos na disciplina de AEDS 1. Em
    seguida, s�o informadas as matr�culas de cada aluno na disciplina. A mesma
    sequ�ncia � fornecida para a disciplina de C�lculo 1. Por fim, deve-se imprimir a
    matr�cula dos alunos que est�o matriculados em ambas disciplinas.

    */


    int numAlunosAEDS, numAlunosCalculo;

    //Solicita o numero de alunos de AEDS
    printf("Digite o numero de alunos de AEDS I: ");
    scanf("%d", &numAlunosAEDS);

    //Define o tamanho do vetor, com base no valor digitado
    int alunosAEDS[numAlunosAEDS];

    //Insere em cada posi��o o n�mero da matricula
    for(int i = 0; i < numAlunosAEDS; i++){
        printf("Matricula do aluno %d: ", i);
        scanf("%d", &alunosAEDS[i]);
    }

    //Solicita o numero de alunos de Calculo
    printf("Digite o numero de alunos de Calculo I: ");
    scanf("%d", &numAlunosCalculo);

    //Define o tamanho do vetor, com base no valor digitado anteriormente
    int alunosCalculo[numAlunosCalculo];

    //Insere em cada posi��o o numero da matricula
    for(int i = 0; i < numAlunosCalculo; i++){
        printf("Matricula do aluno %d: ", i);
        scanf("%d", &alunosCalculo[i]);
    }

    //Ideia de como tem que funcionar a compara��o,
    //Basicamente, vetor inicial pode ficar "parado" enquanto o outro vai alterando
    //at� finalizar a quantidade de elementos desse segundo vetor, quando ele finaliza
    //o vetor inicial tem que ser alterado. Ex.:
    //if(alunosAEDS[0] = alunosCalculo[0])?
    //if(alunosAEDS[0] = alunosCalculo[1])?
    //if(alunosAEDS[0] = alunosCalculo[2])? e etc
    //if(alunosAEDS[1] = alunosCalculo[0])?
    //if(alunosAEDS[1] = alunosCalculo[1])?
    //if(alunosAEDS[1] = alunosCalculo[2])?

    //OBS.: Para ajudar a entender, � s� pensar em como percorrer uma matriz, � basicamente a mesma ideia

    //Percore o primeiro vetor, deixando ele "parado" at� o for de dentro acabar de verificar
    for(int i = 0; i < numAlunosAEDS; i++){
        //Vai alterando o vetor secundario e comparando, com o vetor primeiro fixo, quando esse for acabar � que o vetor primeiro � alterado
        for(int j = 0; j < numAlunosCalculo; j++){
            //Realiza a compara��o se o vetor primeiro � igual ao vetor segundo (que est� se alterando)
            if(alunosAEDS[i] == alunosCalculo[j]){
                printf("AEDS %d / Calculo %d ---------- Matricula aluno em comum: %d\n", alunosAEDS[i], alunosCalculo[j], alunosCalculo[j]);
            }
        }
    }

    //Pausa o programa ap�s executar
    system("pause");

    return 0;
}

