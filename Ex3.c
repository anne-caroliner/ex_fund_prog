/*3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n*/

#include <stdio.h>

int main(void)
{
    // Variaveis
    int num;
    double soma = 0;

    // Entrada de dados
    printf("Informe um valor: ");
    scanf("%d", &num);

    // Processamento de dados
    for (int i = 1; i <= num; i++)
    {
        soma += (double)1 / i;
    }

    // Saida de dados
    printf("1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/%d = %.2lf\n", num, soma);

    return 0;
}
