/*2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica).
Escrever um programa para, a partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.*/

#include <stdio.h>

int main(void)
{
    //Declaraçao de variaveis
    float fabrica, distribuidor, impostos, consumidor;

    //Entrada de dados
    printf("informe o custo de fabrica de um automovel: R$ ");
    scanf("%f",&fabrica);
    printf("Informe a porcentagem do distribuidor (0 a 100): ");
    scanf("%f",&distribuidor);
    printf("Informe a porcentagem de impostos (0 a 100): ");
    scanf("%f",&impostos);

    //Processamento de dados
    consumidor = fabrica + fabrica * distribuidor / 100;
    consumidor += fabrica * impostos / 100;

    //Saida de dados
    printf("O custo do veiculo ao consumidor eh: R$ %.2f", consumidor);

    return 0;
}
