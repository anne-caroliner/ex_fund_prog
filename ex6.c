/*6) O que faz o algoritmo a seguir?
declare i como inteiro
repetir i = 0 até i < 10 passo 2
escreva “o valor i = “, i
fim-repetir
Implemente o algoritmo utilizando a linguagem C.*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i += 2)
    {
        printf("\nValor = %d\t\n", i);
    }


    return 0;
}
