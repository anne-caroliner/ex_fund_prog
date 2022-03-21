/*1) Ler dois numeros float e apresentar, sem utilizar funçoes matematicas prontas:
a) A divisao do primeiro numero pelo segundo, armazenando somente a parte inteira do numero.
b) A soma dos dois numeros com o resultado arredondado para o proximo numero inteiro.*/

#include <stdio.h>

int main(void)
{
    //Declaraçao de variaveis
    float num1, num2;
    int result;

    //Entrada de dados
    printf("Informe um valor float: ");
    scanf("%f",&num1);
    printf("Informe outro valor float: ");
    scanf("%f",&num2);

    //Processamento de dados
    result = num1 / num2;

    //Saida de dados
    printf("%f / %f = %d\n", num1, num2, result);
    result = ceil(num1 + num2);
    printf("%f + %f = %d\n", num1, num2, result);

    return 0;
}
