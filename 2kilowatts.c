/*2) Ler a quantidade de kilowatts de energia el�trica consumidos por uma resid�ncia. Calcular e mostrar o valor em reais
de cada kilowatts, o valor total a ser pago e valor a ser pago por essa resid�ncia quando h� desconto de 10%. Considere
que 100 kilowatts custam 1/7 do sal�rio m�nimo. Ler o valor do sal�rio m�nimo. Armazene em vari�veis apenas o valor do
sal�rio m�nimo (tipo float), a quantidade de Kilowatts gastos pela resid�ncia (tipo int) e o valor de um killowat
(tipo float).*/

#include <stdio.h>

int main(void)
{
    //declara��o de vari�veis;
    float kilowatts,salario,valorpago,precodesconto,valorkilowatts;


    //entrada de dados;
    printf("Informe o valor do salario minimo: ");
    scanf("%f",&salario);
    printf("Informe a quantidade de kilowatts gastos pela residencia: ");
    scanf("%d",&kilowatts);
    printf("O valor do kilowatt: ");
    scanf("%f", &valorkilowatts);
    printf("o valor a ser pago pela residencia: R$ 225.63\n");
    scanf("%f", &valorpago);
    printf("o valor a ser pago pela residencia com desconto de 10%%: ");
    scanf("%f", &precodesconto);

    //processamento de dados;
    valorkilowatts =(salario/7)/100;
    valorpago = (kilowatts * valorkilowatts);

    //sa�da de dados;
    printf("Valor do kilowatts: R$ %.2f\n",valorkilowatts);

    return 0;
}
