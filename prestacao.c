/*3) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o. Calcule o valor a ser pago por meio da f�rmula:
Valor com juros = Presta��o + (Presta��o * Taxa /100)*/

#include <stdio.h>

int main(void)
{
    //declara��o de vari�veis
    float prestacao, valorcomjuros, taxa;

    //entrada de dados
    printf("Informe o valor da prestacao: R$");
    scanf("%f",&prestacao);
    printf("Informe a taxa para a prestacao em atraso (%%): ");
    scanf("%f",&taxa);

    //processamento de dados
    valorcomjuros = prestacao + (prestacao * taxa/100);

    //saida de dados
    printf("Valor com juros: R$ %.2f \n",valorcomjuros);

    return 0;
}

