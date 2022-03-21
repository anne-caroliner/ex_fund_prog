/*4) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os valores em
ordem crescente ou decrescente. Validar para que o programa não aceite valores iguais para os limites do
intervalo. Mostre os divisíveis por x e não divisíveis por y nesse intervalo. x e y são variáveis informadas pelo
usuário.*/

#include <stdio.h>

int main(void)
{
   
    int x, y, limInf, limSup;
   
    do
    {
        printf("Informe o limite inferior do intervalo: ");
        scanf("%d", &limInf);

        printf("Informe o limite superior do intervalo: ");
        scanf("%d", &limSup);
        
        if (limInf == limSup)
            printf("Informar valores diferentes para o limite inferior e superior do intervalo...\n\n");
    
    }while(limInf == limSup);

    printf("informe o valor de x: ");
    scanf("%d", &x);

    printf("Informe o valor de y: ");
    scanf("%d", &y);
    
    if (limInf < limSup)
    {
        for (int i = limInf; i <= limSup; i++)
        {
            if (i % x == 0 && i % y != 0)
                printf("%d\t", i);
        }
    }

    else
    {
        for (int i = limInf; i >= limSup; i--)
        {
            if (i % x == 0 && i % y != 0)
                printf("%d\t", i);
        }
    }
    return 0;
}
