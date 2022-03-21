/*12) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.*/



#include <stdio.h>

int main(void)
{
    
    int num;
    int cont = 0;

    
    printf("Informe quantos numeros deseja digitar: ");
    scanf("%d", &num);

    int valores[num];
    
    for (int i = 0; i < num; i++)
    {
        do
        {
            printf("Digite o %d%c numero: ", i + 1, 167);
            scanf("%d", &valores[i]);

            if (i < 0)
            {
                printf("\nInforme um valor maior que 0(zero)...\n\n");
            }
        }while(i < 0);
    }

    printf("\n");
 
    for (int i = 0; i < num; i ++)
    {

        if (valores[i] % 2 == 0)
        {
            
            printf("%d\t", valores[i]);
            cont++;
        }

        if (cont == 5)
        {
            printf("\n");
            cont = 0;
        }
    }
   
    for (int i = 0; i < num; i ++)
    {
        if (valores[i] % 2 != 0)
        {
            
            printf("%d\t", valores[i]);
            cont++;
        }

        if (cont == 5)
        {
            printf("\n");
            cont = 0;
        }
    }

    printf("\n");
    
    return 0;
}
