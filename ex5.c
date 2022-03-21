/*5) O que faz o algoritmo a seguir?
declare valor, maior como inteiro
leia valor
maior ← valor
para j = 0 até j < 4 passo 1
leia valor
se valor > maior então
maior ← valor
fim-se
fim-para
escreva maior
Implemente o algoritmo utilizando a linguagem C.
Responda: Como alterar o algoritmo para não ser necessário fazer uma leitura do valor
antes da estrutura for?*/

// RESPOSTA: Para não realizar uma leitura de valor antes de for, podemos colocar j < 5 e um if para salvar o primeiro valor, ficaria assim:

/*
int main(void)
{
    int valor, maior;

    for (int j = 0; j < 5; j++)
    {
        printf("Digite valor: ");
        scanf("%d", &valor);

        if (j == 0)
            maior = valor;

        if (valor > maior)
            maior = valor;
    }

    printf("Maior: %d\n", maior);
}*/

#include <stdio.h>

int main(void)
{
    int valor, maior;

    printf("Digite valor: ");
    scanf("%d", &valor);

    maior = valor;

    for (int j = 0; j < 4; j++)
    {
        printf("Digite valor: ");
        scanf("%d", &valor);

        if (valor > maior)
            maior = valor;
    }

    printf("Maior: %d\n", maior);

    return 0;
}

