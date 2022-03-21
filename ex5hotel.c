/*5) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na
diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final
de semana completo. Elaborar um programa para calcular:
a) Valor promocional da diária;
b) Valor total caso a ocupação no final de semana atinja 100%;
c) Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
d) Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
Armazene em variáveis apenas o valor da diária, o valor da diária com desconto e a quantidade de quartos.*/

#include <stdio.h>

int main (void)

{
    //Declaração de variaveis
    /*  diariaprom = diaria promocional
        qtdaptos = quantidade de apartamentos*/

        float diaria, diariaprom;
        int qtdaptos;

    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Digite a quantidade de apartamentos: ");
    scanf("%d", &qtdaptos);

    //Processamento de dados
    diariaprom = (diaria - ((25 * diaria) /100));
    printf("__________________________________________________\n");

    //saida de dados
    printf(" o valor da diaria promocional: %.2f\n", diariaprom);
    printf("O total arrecadado com 100 por cento: %.2f\n", diariaprom * qtdaptos * 2);
    printf("O total arrecadado com 75 por cento: : %.2f\n", diariaprom * qtdaptos * 2 * 0.7);
    printf("O que deixara de arrecadar ao aplicar o desconto: : %.2f\n", diaria * qtdaptos * 2 * 0.25);

    return 0;
}
