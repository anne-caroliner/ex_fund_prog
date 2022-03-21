/*2) Ler a quantidade de kilowatts de energia elétrica consumidos por uma residência. Calcular e mostrar o valor em reais
de cada kilowatts, o valor total a ser pago e valor a ser pago por essa residência quando há desconto de 10%. Considere
que 100 kilowatts custam 1/7 do salário mínimo. Ler o valor do salário mínimo. Armazene em variáveis apenas o valor do
salário mínimo (tipo float), a quantidade de Kilowatts gastos pela residência (tipo int) e o valor de um killowat
(tipo float).*/

#include <stdio.h>

int main(void)
{
    //declaração de variáveis;
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

    //saída de dados;
    printf("Valor do kilowatts: R$ %.2f\n",valorkilowatts);

    return 0;
}
