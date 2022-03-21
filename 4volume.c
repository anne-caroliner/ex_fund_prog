/*) Escreva um programa que leia dois valores que são o raio e a altura de um cilindro e calcule o seu volume,
cuja fórmula é: Volume = 3.1415 * Raio2 * Altura. Faça o teste de mesa com as medidas a seguir: */

#include <stdio.h>

int main(void)
{
    //declaração de variáveis
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

    //saída de dados
    printf("Volume: %.2f cm3 \n",volume);

    return 0;
}
