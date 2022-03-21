/*4) Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). Use a função pow() da biblioteca math.h para calcular a potência.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    float peso, altura, _IMC;

    printf("Digite seu peso (Kg): ");
    scanf("%f",&peso);
    printf("Digite a sua altura (Metros): ");
    scanf("%f",&altura);

    _IMC = peso/(pow(altura,2));

    printf("-----------------------------------\n");//linha divis�ria para separar os resultados.
    printf("Seu IMC e: %0.2f\n",_IMC);

    if(_IMC<17)
    {
        printf("Muito abaixo do peso.\n");
    }
    else
    {
        if(_IMC>17 && _IMC<18.49)
        {
            printf("Abaixo do peso.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<24.99)
            {
                printf("Peso normal.\n");
            }
            else
            {
                if(_IMC>25 && _IMC<29.99)
                {
                    printf("Acima do peso.\n");
                }
                else
                {
                    if(_IMC>30 && _IMC<34.99)
                    {
                        printf("voce esta Obeso.\n");
                    }
                    else
                    {
                        if(_IMC>35 && _IMC<39.99)
                        {
                            printf("Obesidade Severa.\n");
                        }
                        else
                        {
                            if(_IMC>40)
                            {
                                printf("voce esta em Obesidade MORBIDA.\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
