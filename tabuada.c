/*8) Faça um algoritmo que calcule e mostre a tabuada de 0 a 10 de um número inteiro digitado pelo usuário. */

#include <stdio.h>

int main(void)
{
    //declaração de variáveis
    int num;

    //entrada de dados
    printf("escreva um numero de 0 a 10: ");
    scanf("%d", &num);

   //processamento de dados
    printf("\n%d * 0 = %d", num, num * 0);

    printf("\n%d * 1 = %d", num, num * 1);

    printf("\n%d * 2 = %d", num, num * 2);

    printf("\n%d * 3 = %d", num, num * 3);

    printf("\n%d * 4 = %d", num, num * 4);

    printf("\n%d * 5 = %d", num, num * 5);

    printf("\n%d * 6 = %d", num, num * 6);

    printf("\n%d * 7 = %d", num, num * 7);

    printf("\n%d * 8 = %d", num, num * 8);

    printf("\n%d * 9 = %d", num, num * 9);

    printf("\n%d * 10 = %d", num, num * 10);

    return 0;
}
