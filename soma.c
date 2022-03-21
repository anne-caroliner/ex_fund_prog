/*5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo vezes o segundo;*/

#include <stdio.h>

int main (void)
{
    int numero1, numero2,soma12,menos12,vezes12,divisaoint12;

    float divisao12,resto1v2;

    printf("Informe o primeiro valor: ");
    scanf("%d",&numero1);

    printf("Informe o segundo valor: ");
    scanf("%d",&numero2);

    soma12 = numero1 + numero2;
    menos12 = numero1 - numero2;
    vezes12 = numero1 * numero2;
    divisaoint12 = numero1 / numero2;
    divisao12 = (float)numero1 / numero2;
    resto1v2 = (divisaoint12-divisao12) * numero2;

    printf("Soma do primeiro pelo segundo: %d\n",soma12);

    printf("Subtracao do primeiro pelo segundo: %d\n",menos12);

    printf("Multiplicacao: %d\n",vezes12);

    printf("divisao inteira do primeiro pelo segundo: %d\n",divisaoint12);

    printf("divisao float do primeiro pelo segundo: %.2f\n",divisao12);

    printf("resto da divisao do primeiro pelo segundo vezes o segundo: %.2f\n",resto1v2);


    return 0;
 }
