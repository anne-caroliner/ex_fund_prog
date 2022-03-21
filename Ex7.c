/*7) Leia 10 números e desses contar quantos são pares, quantos são ímpares e quantos são divisíveis por 7.
Apresente essas quantidades.*/

#include <stdio.h>

int main(void)
{
   
    int count[3] = {0, 0, 0};
    int num;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d%c numero: ", i + 1, 167);
        scanf("%d", &num);

        if (num % 2 == 0)
            count[0]++;

        if (num % 2 != 0)
            count[1]++;

        if (num % 7 == 0)
            count[2]++;
    }
    
    printf("%d numero(s) par(es)\n%d numero(s) impar(es)\n%d numero(s) divisivel(is) por 7\n", count[0], count[1], count[2]);
    return 0;

}