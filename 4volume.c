/*) Escreva um programa que leia dois valores que s�o o raio e a altura de um cilindro e calcule o seu volume,
cuja f�rmula �: Volume = 3.1415 * Raio2 * Altura. Fa�a o teste de mesa com as medidas a seguir: */

#include <stdio.h>

int main(void)
{
    //declara��o de vari�veis
    float altura, raio2, volume;

    //entrada de dados
    printf("Informe a altura: ");
    scanf("%f",&altura);
    printf("Informe o raio: ");
    scanf("%f",&raio2);
    printf("Informe o volume: ");
    scanf("%f",&volume);

    //processamento de dados
    volume = 3.1415 * raio2 * altura;

    //sa�da de dados
    printf("Volume: %.2f cm3 \n",volume);

    return 0;
}
