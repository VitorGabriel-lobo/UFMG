#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void){
    int dia, mes, ano;
    char buf[32];
    struct tm tma, tmb;
    time_t diff;

    /* Inicializa struct tm */
    memset( &tma, 0, sizeof(tma) );
    memset( &tmb, 0, sizeof(tmb) );

    /* Le data inicial */
    printf("Entre com a data inicial (DD/MM/AAAA): ");
    fgets( buf, sizeof(buf), stdin );
    sscanf( buf, "%02d/%02d/%04d", &tma.tm_mday, &tma.tm_mon, &tma.tm_year );

    // Ajusta struct tm inicial
    tma.tm_mon -= 1;
    tma.tm_year -= 1900;

    //Atribui a data dia 17/09/2020
    tmb.tm_mday = 17;
    tmb.tm_mon = 9;
    tmb.tm_year = 2020;

    /* Ajusta struct tm final */
    tmb.tm_mon -= 1;
    tmb.tm_year -= 1900;

    /* Calcula diferenca em segundos */
    diff = difftime( mktime(&tmb), mktime(&tma) );

    /* Exibe resultados */
    printf( "Diferenca em segundos: %ld\n", diff );
    printf( "Diferenca em minutos: %ld\n", diff / 60 );
    printf( "Diferenca em horas: %ld\n", diff / (60 * 60) );
    printf( "Diferenca em dias: %ld\n", diff / (60 * 60 * 24) );

    return 0;
}







/* CÓDIGO ANTIGO 1

#include <stdio.h>
#include <time.h>
#include <string.h>

#define BUF_TAM_MAX (32)

int main( void )
{
    int ret = 0;
    char buf[BUF_TAM_MAX];
    struct tm tma, tmb;
    time_t diff;

    // Inicializa struct tm
    memset( &tma, 0, sizeof(tma) );
    memset( &tmb, 0, sizeof(tmb) );

    // Le data inicial
    printf("Entre com a data inicial (DD/MM/AAAA): ");
    fgets( buf, sizeof(buf), stdin );

    // Desmonta data inicial
    ret = sscanf( buf, "%02d/%02d/%04d", &tma.tm_mday, &tma.tm_mon, &tma.tm_year );

    if(ret != 3 )
    {
        printf("Data Inicial Invalida!\n");
        return 1;
    }

    // Ajusta struct tm inicial
    tma.tm_mon -= 1;
    tma.tm_year -= 1900;

    // Le data final
    printf("Entre com a data final (DD/MM/AAAA): ");
    fgets( buf, sizeof(buf), stdin );

    // Desmonta data final
    ret = sscanf( buf, "%02d/%02d/%04d", &tmb.tm_mday, &tmb.tm_mon, &tmb.tm_year );

    if(ret != 3 )
    {
        printf("Data Final Invalida!\n");
        return 1;
    }

    // Ajusta struct tm final
    tmb.tm_mon -= 1;
    tmb.tm_year -= 1900;

    // Calcula diferenca em segundos
    diff = difftime( mktime(&tmb), mktime(&tma) );

    // Exibe resultados
    printf( "Diferenca em segundos: %ld\n", diff );
    printf( "Diferenca em minutos: %ld\n", diff / 60 );
    printf( "Diferenca em horas: %ld\n", diff / (60 * 60) );
    printf( "Diferenca em dias: %ld\n", diff / (60 * 60 * 24) );

    return 0;
}
*/

//-------------------------------------------------------------------------------------

/* CÓDIGO ANTIGO 2

#include <stdio.h>
#include <time.h>

int main() {
   struct tm data1 = {0}; // data inicial
   struct tm data2 = {0}; // data final

   // preenche as datas
   data1.tm_year = 2022 - 1900; // ano - 1900
   data1.tm_mon = 0; // mês (0-11)
   data1.tm_mday = 1; // dia
   data2.tm_year = 2022 - 1900;
   data2.tm_mon = 0;
   data2.tm_mday = 10;

   // converte as datas para segundos
   time_t segundos1 = mktime(&data1);
   time_t segundos2 = mktime(&data2);

   // calcula a diferença em segundos
   double diferenca = difftime(segundos2, segundos1);

   // converte a diferença em dias
   int dias = diferenca / 86400;

   printf("A diferença entre as datas é de %d dias.\n", dias);

   return 0;
}

*/





