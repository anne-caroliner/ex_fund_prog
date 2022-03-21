/* 1) Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo e ainda obter um lucro
de 25%.*/

#include <stdio.h>
#include <math.h>
int main (void)
{



    //declara��o das variaveis
    /*      custoEsp: custo do espetaculo
            valorIng: valor do ingresso
            cob: cobrir custo do espetaculo
            cobLuc: cobrir custo do espetaculo + lucro de 25% */

    float custoEsp, valorIng, cob, cobLuc;

    // entrada de dados
    printf("Informe o valor de custo do espetaculo: ");
    scanf("%f",&custoEsp);
    printf("\nInforme o valor do ingresso: ");
    scanf("%f",&valorIng);

    //processamento de dados
    cob = ceil(custoEsp / valorIng);
    cobLuc = ceil (((custoEsp * 25)/100) + custoEsp) / valorIng;

    //Saida de dados
    printf("\nPara cobrir o custo do espetaculo eh necessario vender %.0f ingressos \n", cob);
    printf("\nPara cobrir o custo do espetaculo e ter 25 por cento de lucro eh necessario vender %.0f ingressos \n", cobLuc);


    return 0;
}
