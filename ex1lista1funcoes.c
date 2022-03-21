/*1) Fazer um programa que permite aplicar as operações de soma, subtração, multiplicação, divisão e resto
em dois números fornecidos pelo usuário. Cada operação é uma função e deve ser acessada a partir de um
menu (use switch case). As funções são implementadas no próprio programa.
a) Soma sem parâmetros e sem retorno
b) Subtração com parâmetros e sem retorno
c) Multiplicação sem parâmetros e com retorno
d) Divisão com parâmetros e com retorno.
e) Resto com parâmetros e com retorno.*/

#include <stdio.h>

void soma(void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
}

void subtracao(int num1, int num2)
{
    printf("Subtracao: %d\n", num1 - num2);
}

int multiplicacao(int num1, int num2)
{
    return (num1 * num2);
}

float divisao(int num1, int num2)
{
    return ((float)num1 / num2);
}

int resto(int num1, int num2)
{
    return (num1 % num2);
}

int main(void)
{
    char escolha, opcao;
    int n1, n2;

    do
    {
        printf("A - Adicionar\n");
        printf("S - Subtrair\n");
        printf("M - Multiplicar\n");
        printf("D - Dividir\n");
        printf("R - Resto\n");
        printf("\nEscolha uma opcao: ");
        setbuf(stdin, NULL);
        scanf("%c", &escolha);

        switch (escolha)
        {
        case 'A':
        case 'a':
            soma();
            break;
        case 'S':
        case 's':
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);
            subtracao(n1, n2);
            break;
        case 'M':
        case 'm':
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);
            printf("Multiplicacao: %d\n", multiplicacao(n1, n2));
            break;
        case 'D':
        case 'd':
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            do
            {
                printf("Informe o segundo numero: ");
                scanf("%d", &n2);
                if (n2 <= 0)
                {
                    printf("Valor invalido");
                }
            } while (n2 <= 0);
            printf("Divisao: %.2f\n", divisao(n1, n2));
            break;
        case 'R':
        case 'r':
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            do
            {
                printf("Informe o segundo numero: ");
                scanf("%d", &n2);
                if (n2 <= 0)
                {
                    printf("Valor invalido");
                }
            } while (n2 <= 0);
            printf("Resto: %d\n", resto(n1, n2));
            break;
        default:
            printf("Escolha invalida\n");
        }

        printf("\n\nDeseja repetir a execucao do programa (S/s): ");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    return 0;
}