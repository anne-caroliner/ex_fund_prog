/*2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas em tipo float).*/

#include <stdio.h>

int main (void)
{
    //declaração de variaveis
    int seg;
    float min, hrs, dias;

    //entrada de dados
    printf("Informe o tempo em segundos: ");
    scanf("%d",&seg);

    //processamento de dados
    min = (seg / 60);
    hrs = (min / 60);
    dias = (hrs / 24);

    //saida de dados
    printf("\n O tempo em minutos eh: %.1f", min);
    printf("\n O tempo em horas eh: %.1f", hrs);
    printf("\n O tempo em dias eh: %.1f", dias);

    return 0;

    }
