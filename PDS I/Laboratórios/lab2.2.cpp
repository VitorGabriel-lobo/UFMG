#include <stdio.h>
#include <stdlib.h>
#include <string> //C++ Strings
#include <iostream>
#include <math.h> //biblioteca com funções matematicas
#include <cmath>

using namespace std;

int main (){
    /*
    Aproxime o valor de Pi empregando a série infinita de Gregory-Leibniz:
    Pi = 4 - 4/3 + 4/5 - 4/7 + ...
    Executando a série acima, a sua função deve retornar o número de iterações
    necessárias para encontrar um valor próximo ao valor de M_PI (uma constante com o
    valor de PI da biblioteca math.h) com uma diferença máxima de X, que é fornecida como
    entrada. No exemplo abaixo: foi necessário calcular 100002 termos da série para obter
    um valor próximo ao valor de PI (M_PI) com uma diferença de 0.000010.

    https://www.youtube.com/watch?v=LD_msrFMtdY
    */

    float diferenca, piSobreQuatro = 0;
    scanf("%f", &diferenca);

    diferenca = M_PI - diferenca;

    printf("\n%f - diferenca", diferenca);

    for(int n = 0; n < 100003; n++){
        piSobreQuatro += pow(-1,n)*4/(2*n + 1);

        //printf("\n%f", piSobreQuatro);

        if(piSobreQuatro == diferenca){
            printf("\n deu certo ==================================== %d \n", n);
            printf("\n%f", piSobreQuatro);
        }
    }


    //Pausa o programa após executar
    system("pause");

    return 0;
}



//-------------------------------------------------------------------------
/*
    int limite;
    scanf("%d", &limite);

    float piSobreQuatro = 0;

    for(int n = 0; n < limite; n++){
        piSobreQuatro += pow(-1,n)/(2*n + 1);
        printf("pi: %f\n", piSobreQuatro * 4);
    }
*/
//-------------------------------------------------------------------------

/* Programa que calcula uma aproximacao de pi
   usando a formula de Gregory-Leibniz:
   4*(1 - 1/3 + 1/5 - 1/7 + ...).

#include <stdio.h>
//#include <math.h>

int main() {
  double pi,soma;
  int i,j;

  printf("Digite o numero de iteracoes para calcular o pi: ");
  scanf("%d", &j);

  soma = 0;
  for (i = 0; i < j; i++) {
    // Alternativa:
    // soma = soma + pow(-1,i)/(2*i + 1);

    if (i % 2 == 0) {
      soma = soma + 1.0/(2*i + 1);
    }
    else {
      soma = soma - 1.0/(2*i + 1);
    }
    printf("%.15lf\n", 4*soma);
  }

  pi = 4*soma;
  printf("O valor aproximado de pi eh 5 (ou %.15lf)\n", pi);

  return(0);
}

*/
