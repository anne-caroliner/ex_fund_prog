/*8) O que faz o algoritmo a seguir?
declare i , s como inteiro
s ← 1
repetir i = 0 até i < 5 passo 1
s ← s * i
fim-repetir
escreva s
Implemente o algoritmo utilizando a linguagem C.
Responda:
a) Por que a variável s foi inicializada com 1?
b) Qual o problema observado neste algoritmo?
c) Qual seria a solução correta?*/

//RESPOSTA: 
/*  Resposta a: A variavel é inicializada em 1, pois 1 é o elemento neutro da divisao
    Resposta b: O problema se deve por iniciarmos int i = 0, todo numero multiplicado por 0 é 0
    Resposta c: Podemos inicializar o i com 1 e caso queira realizar a multiplicação 5 vezes, fazer com que seja
    repetido até i < 6, como no codigo a seguir:

    int main(void)
    {
        int s = 1;

        for (int i = 1; i < 6; i++)
        {
            s *= i;
        }

        printf("s = %d", s);
        
        return 0;
    }*/

#include <stdio.h>


int main(void)
{
    int s = 1;

    for (int i = 0; i < 5; i++)
    {
        s *= i;
    }

    printf("\n\ns = %d\n\n", s);

    return 0;
}