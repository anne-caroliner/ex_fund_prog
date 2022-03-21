/*7) Faça um algoritmo que receba uma temperatura em grau Celsius, e calcule e mostre essa temperatura em
grau Fahrenheit. Sabe-se que F = (1.8 * C) + 32.*/

#include <stdio.h>

int main(void)
{
    //declaração de variáveis
    float tempC, tempF;

    //entrada de dados
    printf("\nInforme a temperatura em graus Centigrados: ");
	scanf("%f", &tempC);

	//processamento de dados
	tempF = tempC * 1.8 + 32;

	//saida de dados
	printf("\nA temperatura em graus Fahrenheit: %-7.2f", (tempF));

    printf("\n\n");

	return 0;
}
