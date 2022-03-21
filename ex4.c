/*4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos. */

#include <stdio.h>

int main (void)
{
    
    int sum[2] = {0, 0};
    
    for (int i = 500; i >= 0; i--)
    {
        
        if (i % 4 == 0 || i % 10 == 0)
        {
            printf("%d\tDivisivel por 4 ou multiplo de 10\n", i);
            sum[0] += i;
            sum[1]++;
        }
    }
    
    printf("\nA media desses multiplos eh: %.2f\n", (float)sum[0] / sum[1]);

    return 0;
}
