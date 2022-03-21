/*13) Apresente os múltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostre os valores separados por uma
tabulação e em colunas com 8 números por linha.*/

#include <stdio.h>

int main(void)
{
    
    for (int i = 920; i >= -40; i -= 80)
    {
        for (int j = 80; j > 0; j--)
        {
            if ((i + j) < 0)
                
                return 0;

            if ((i + j) % 10 == 0)
            {
                printf("%d\t", i + j);
            }
        }
        printf("\n");
 
    }
    return 0;
}
