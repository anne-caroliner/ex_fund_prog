/*2) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do
número de pessoas e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00
aumentando de R$ 0,50 centavos. É informada a quantidade de pessoas.*/

#include <stdio.h>

int main(void)
{
    //declaracao
    int pessoas;
    float totalRecebido, i, incremento = 0.50;

    //entrada
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    //Processamento
    printf("\nVALOR DO INGRESSO      TOTAL RECEBIDO\n");
    
    for (float i = 15; i <= 20; i += 0.50)
    {
        totalRecebido = (i * pessoas);
        printf("R$ %.2f\t\t", i);
        printf("R$ %.2f\n", totalRecebido);
    }
    

    return 0;
}