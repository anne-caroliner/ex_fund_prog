/*2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência (C = 2. π. r).*/

#include <stdio.h>

int main(void)
{
    //declaração de variáveis
    float vRaio, vArea;

    //entrada de dados
    printf("Informe o raio de uma circunferencia: ");
    scanf("%f",&vRaio);
    printf("Informe a area da circunferencia: ", (vArea));
    scanf("%f",&vArea);


    //processamento de dados
    vArea = 2 * 3.14 * vRaio;
    //saída de dados
    printf("Area da cincunferencia: %-7.2f  \n",vArea);

    return 0;
}

