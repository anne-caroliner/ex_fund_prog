/*3) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.*/

#include <stdio.h>

int main (void)
{
    //Declaraçao das variaveis
    int D1, D2, M1, M2, A1, A2; //D1 ou D2 é o dia, M1 ou M2 é o mês, A1 ou A2 é o ano

    //Entrada de dados
    printf("Informe a primeira data\n");
    printf("Informe o dia: ");
    scanf("%d", &D1);
    printf("Informe o mes: ");
    scanf("%d", &M1);
    printf("Informe o ano: ");
    scanf("%d", &A1);


    printf("Informe a segunda data\n");
    printf("Informe o dia: ");
    scanf("%d", &D2);
    printf("Informe o mes: ");
    scanf("%d", &M2);
    printf("Informe o ano: ");
    scanf("%d", &A2);

    //Processamento de dados
    //MAIOR
    if ((D1 > D2) && (M1 > M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d",D1, M1, A1);
    }
    //MENOR
    if ((D1 < D2) && (M1 < M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d",D2, M2, A2);
    }
    //DIA MAIOR, MES MENOR E ANO MAIOR
    if ((D1 > D2) && (M1 < M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d",D1, M2, A1);
    }
    //DIA MAIOR, MES MENOR E ANO MENOR
    if ((D1 > D2) && (M1 < M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d",D1, M2, A2);
    }
    //DIA MENOR, MES MAIOR E ANO MENOR
    if ((D1 < D2) && (M1 > M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d",D2, M1, A2);
    }
    //DIA MENOR, MES MAIOR E ANO MAIOR
    if ((D1 < D2) && (M1 > M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d",D2, M1, A1);
    }



    //DIA IGUAL, MES MAIOR E ANO IGUAL
    if ((D1 == D2) && (M1 > M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M1, A1);
    }
    //DIA MAIOR, MES IGUAL E ANO MAIOR
    if ((D1 > D2) && (M1 == M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A1);
    }
    //DIA MAIOR, MES IGUAL E ANO MENOR
    if ((D1 > D2) && (M1 == M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A2);
    }
    //DIA MAIOR, MES IGUAL E ANO IGUAL
    if ((D1 > D2) && (M1 == M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A2);
    }
    //DIA IGUAL, MES MENOR E ANO IGUAL
    if ((D1 == D2) && (M1 < M2) && (A1 == A2))
    {
          printf("A maior data eh %d/%d/%d", D1, M2, A2);
    }
    //DIA MENOR, MES IGUAL E ANO MENOR
    if ((D1 < D2) && (M1 == M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M1, A2);
    }
    //DIA MENOR, MES IGUAL E ANO MAIOR
    if ((D1 < D2) && (M1 == M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M1, A1);
    }
    //DIA MENOR, MES IGUAL E ANO IGUAL
    if ((D1 < D2) && (M1 == M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M1, A2);
    }
    //DIA IGUAL, MES IGUAL E ANO IGUAL
    if ((D1 == D2) && (M1 == M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A1);
    }
    //DIA IGUAL, MES MAIOR E ANO MAIOR
    if ((D1 == D2) && (M1 > M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A1);
    }
    //DIA IGUAL, MES MAIOR E ANO MENOR
    if ((D1 == D2) && (M1 > M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A2);
    }
    //DIA IGUAL, MES MENOR E ANO MAIOR
    if ((D1 == D2) && (M1 < M2) && (A1 > A2))
    {
          printf("A maior data eh %d/%d/%d", D1, M2, A1);
    }
    //DIA IGUAL, MES MENOR E ANO MENOR
    if ((D1 == D2) && (M1 < M2) && (A1 < A2))
    {
          printf("A maior data eh %d/%d/%d", D1, M2, A2);
    }
     //DIA IGUAL, MES IGUAL E ANO MENOR
    if ((D1 == D2) && (M1 == M2) && (A1 < A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A2);
    }
     //DIA IGUAL, MES IGUAL E ANO MAIOR
    if ((D1 == D2) && (M1 == M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A1);
    }
   //DIA MAIOR, MES MAIOR E ANO IGUAL
    if ((D1 > D2) && (M1 > M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D1, M1, A1);
    }
    //DIA MENOR, MES MENOR E ANO IGUAL
    if ((D1 < D2) && (M1 < M2) && (A1 == A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M2, A1);
    }
    //DIA MENOR, MES MENOR, ANO MAIOR
    if ((D1 < D2) && (M1 < M2) && (A1 > A2))
    {
        printf("A maior data eh %d/%d/%d", D2, M2, A1);
    }
    return 0;

}




