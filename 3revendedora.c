/* 3) Uma revendedora de carros usados paga aos seus funcionários vendedores um salário fixo por mês, mais
uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por eles efetuadas.
Escrever um programa que receba os seguintes dados de um vendedor:
- Número de carros vendidos;
- Valor total das vendas realizadas;
- Valor do salário fixo;
- Valor da comissão recebida por carro vendido.
Calcular e mostrar o salário mensal desse vendedor. */

#include <stdio.h>

#include <stdlib.h>

    int main(int argc, char * * argv)
{
     //declaração das variaveis;
    float vendas, salariofixo, comissao, salario;
    int carros;

    //entrada de dados;
    printf("Informe o salario fixo: ");
    scanf("%f", & salariofixo);
    printf("Informe o valor de comissao por carro vendido: ");
    scanf("%f", & comissao);
    printf("Informe o numero de carros vendidos: ");
    scanf("%d", & carros);
    printf("Informe o valor total de suas vendas: ");
    scanf("%f", & vendas);

    //processamento de dados;
    salario = salariofixo + (comissao * carros) + (vendas * 0.05);

    //saida de dados;
    printf("\nSalario final do vendedor: [%0.2f]\n\n", salario);


    return 0;

}
