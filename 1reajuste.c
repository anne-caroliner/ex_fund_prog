/*1) Ler um valor que representa o preço de um produto e imprimir esse valor com reajuste de x%. O percentual
do reajuste é informado pelo usuário. */

#include <stdio.h>

int main(void)
{
    //declaração de variaveis;
    float valorProduto, percentual;
    int valorReajustado;
    //entrada de dados;
    printf("\n Informe o valor do  produto: R$ %.2f\n");
    scanf("%f",&valorProduto);

    //processamento de dados;
    printf("\n Informe o percentual de reajuste do valor do produto (0 a 100): ");
    scanf("%f",&percentual);

    //saída de dados;
    printf("\n O valor reajustado do produto: ") (valorProduto + percentual);
    scanf("%f",&valorReajustado);

    return 0;
}
