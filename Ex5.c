/*5) Mostrar os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresentar os valores
em ordem decrescente. Fazer a média dos valores desse intervalo que são divisíveis por
3 e por 5.*/

#include <stdio.h>

int main(void)
{
    //Declarar variáveis
    int soma, media, contador;

    //processamento
    printf("\n************** Ordem decrescente dos numeros impares e nao divisiveis 5 **************\n");
    for (int i = 200; i >= 1; i--)
    {
        if (i % 2 != 0 & i % 5 != 0)
        {
            printf("%d\t", i);
        }
        if (i % 3 == 0 & i % 5 == 0)
        {
            contador++;
            soma = soma + i;
            media = soma / contador;
            printf("%d\t", i);
        }

    }
    
    printf("\n\n************** Media dos valores divisiveis por 3 e 5 ************** \n\t\t\t%d\n", media);
        return 0;
}