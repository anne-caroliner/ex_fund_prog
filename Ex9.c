/*9) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
ordem crescente ou decrescente. Para os limites do intervalo validar para que:
1) O programa não aceite valores iguais, ou seja, que o limite inferior seja igual ao superior e vice-versa;
2) Em cada limite não seja informado valor menor ou igual a zero.
Apresente os valores separados por tabulação. Faça a média dos valores que são divisíveis por 11 e por 7,
desse intervalo.*/

#include <stdio.h>

int main(void)
{

    int limiteInferior, limiteSuperior;
    float cont[2] = {0, 0};

    do
    {
        printf("Informe o limite inferior do intervalo: ");
        scanf("%d", &limiteInferior);

        printf("Informe o limite superior do intervalo: ");
        scanf("%d", &limiteSuperior);

        if (limiteInferior == limiteSuperior)
        {
            printf("Informar valores diferentes para o limite inferior e superior do intervalo...\n\n");
        }

        else if (limiteInferior <= 0 || limiteSuperior <= 0)
        {
            printf("Limites nao podem ser menores ou iguais a zero...\n\n");
        }

    } while (limiteInferior == limiteSuperior || limiteInferior <= 0 || limiteSuperior <= 0);

    if (limiteInferior < limiteSuperior)
    {
        for (int i = limiteInferior; i <= limiteSuperior; i++)
        {
            printf("%d\t", i);

            if (i % 11 == 0 && i % 7 == 0)
            {
                cont[0] += i;
                cont[1] ++;
            }
        }
    }

    else
    {
        for (int i = limiteInferior; i >= limiteSuperior; i--)
        {
            printf("%d\t", i);

            if (i % 11 == 0 && i % 7 == 0)
            {
               
                cont[1]++;
            }
        }
    }

    printf("\n\nA media dos valores divisiveis por 11 e por 7 desse intervalo eh: %.2f", cont[0] / cont[1]);

    return 0;
}
