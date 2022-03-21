/*1) Apresente (separados por tabulação) os números entre 1 e 1000 que são divisíveis por
11 e ímpares.*/

#include <stdio.h>

int main(void)
{
    //declaracao de variaveis
    int i;

    //processamento de dados
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 11 == 0 && i % 2 != 0)
        {
            printf("%d\t\t", i);
        }
    }

    return 0;
}