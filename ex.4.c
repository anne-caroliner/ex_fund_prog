/*4) Faça um programa que receba o salário de um funcionário e o código correspondente ao seu cargo atual e mostre o
cargo, o valor do aumento e seu novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//Declaraçao de variaveis
    int cargo = 0; //1=Escrituario, 2=Secretario, 3=Caixa, 4=Gerente e 5=Diretor
	float salario = 0, novo_salario = 0;

    //Entrada de dados
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
    printf("(1)Escrituario\n(2)Secretario\n(3)Caixa\n(4)Gerente\n(5)Diretor\n");
    printf("Informe o cargo do funcionario:\n");
	scanf("%d", &cargo);
	

    //Processamento de dados
	switch (cargo)
	{
		case 1:
			if (novo_salario = salario * 1.5)
			{
				printf("o Cargo eh Escrituario\n" );
			}
			break;
		case 2:
			if (novo_salario = salario * 1.35)
			{
				printf("o Cargo eh Secretario\n" );
			}
			break;
		case 3:
			if (novo_salario = salario * 1.2)
			{
				printf("o Cargo eh Caixa\n" );
			}
			break;
		case 4:
			if (novo_salario = salario * 1.1)
			{
				printf("o Cargo eh Gerente\n" );
			}
			break;
		case 5:
			if (novo_salario = salario * 1.0)
			{
				printf("o Cargo eh Diretor\n" );
			}
			break;
		default:
			printf("Operacao invalida");
			break;
	}

    //Saida de dados
	printf("O valor do aumento eh: R$%.2f\n", novo_salario - salario);
	printf("O novo salario eh: R$%.2f\n", novo_salario);

    return 0;
}