#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    //Declaração de variaveis
    int i, num = rand, contDiv;

    printf("Gerando 10 valores aleatorios:\n");

    /* srand((NULL)) inicializa o gerador de números aleatórios
  com o valor da função (NULL). */
    srand((NULL));
    for (i = 0; i < 10; i++)
    { // gera valores aleatórios na faixa de 0 a 50
        printf("%d ", rand() % 50);
    }

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    contDiv = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            contDiv++;
            break;
        }
    }

    if (contDiv == 0 && num != 1)
    {
        printf("%d eh primo\n", num);
    }
    else
    {
        printf("%d nao eh primo\n", num);
    }

    return 0;
}