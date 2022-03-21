/* 6) Calcular o valor do sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de imposto de
renda e de INSS*/

#include <stdio.h>
int main (void)
{
    float salario,inss,ir,proc;

    printf("\nInforme o valor do salario bruto: ");
    scanf("%f", &salario);
    printf("\nInforme o percentual do INSS: ");
    scanf("%f", &inss);
    printf("\nInforme o percentual de IR: ");
    scanf("%f", &ir);

    printf("\n________________________________________\n");
    printf("\nSalario liquido: %.2f", salario - salario * (inss/100) - (salario * (ir/100)));



return 0;
}
