/*7) O que faz o algoritmo a seguir?
declare i, s como inteiro
s ← 0
repetir i = 0 até i < 10 passo 1
s ← s + i
fim-repetir
escreva s
Implemente o algoritmo utilizando a linguagem C.
Responda: Por que a variável s foi inicializada com 0?*/

// /*  RESPOSTA: O s foi iniciado em 0 pois zero é o elemento neutro da soma. Haveria a possibilidade de não iniciarmos a variavel e ainda dar certo, mas não devemos assumir que o valor da variavel é zero, portando, é uma boa pratica iniciar as variaveis antes de utilizalas*/


#include <stdio.h>

int main(void)
{
    int s = 0;

    for (int i = 0; i < 10; i++)
    {
        s += i;
    }
    printf("\n\ns = %d\n\n", s);

    return 0;

}


