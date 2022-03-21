/*6) Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e forneça a média dos
pares.*/

#include <stdio.h>

int main(void)
{
    
    int count[2] = {0, 0};
    
    for (int i = 0; i <= 100; i += 2)
    {
        printf("%d\t", i);
        count[0] += i;
        count[1]++;
    }
    
    printf("\n\nA media dos pares do intervalo entre 0 e 100 eh: %.2f\n", (float)count[0] / count[1]);

    return 0;
}