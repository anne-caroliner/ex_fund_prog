/*1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3), cuja f�rmula �: Volume = Comprimento * Largura * Altura*/

#include <stdio.h>

int main(void)
{
    //declara��o de vari�veis
    float comprimento, largura, altura, volume;

    //entrada de dados
    printf("Informe o comprimento: ");
    scanf("%f",&comprimento);
    printf("Informe a largura: ");
    scanf("%f",&largura);
    printf("Informe a altura: ");
    scanf("%f",&altura);

    //processamento de dados
    volume = comprimento * largura * altura;

    //sa�da de dados
    printf("Volume: %.2f cm3 \n",volume);

    return 0;
}
