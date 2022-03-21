/*8) Apresente os números pares entre 100 e 200. Contar quantos são ímpares e não divisíveis por 3 nesse
intervalo. Faça a média dos valores pares e divisíveis por 5 do intervalo.*/

#include <stdio.h>

int main(void)
{
    
    int cont[3] = {0, 0, 0};
    cont[0] = 0;

    for (int i = 100; i <= 200; i++)
    {
        
        if (i % 2 == 0)
            printf("%d\t", i);

        
        if (i % 2 != 0 && i % 3 != 0)
        {
            cont[0]++;
        }

        if (i % 2 == 0 && i % 5 == 0)
        {
           
            cont[1] += i;
            
            cont[2]++;
        }
    }

    printf("\n\nHa %d numeros impares e nao divisiveis por 3", cont[0]);
    
    printf("\n\nA media dos numeros pares e divisiveis por 5 eh: %.2f\n", (float)cont[1]/cont[2]);

    return 0;
}
