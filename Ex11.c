/*11) Um número é primo quando é divisível de maneira exata somente por 1 e por ele mesmo. Na figura a
seguir, os números destacados são primos:
Elabore um programa que leia um número inteiro e determine se o mesmo é ou não um número primo.*/

#include <stdio.h>

int main(void)
{
    
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0 && num != 2 || num == 0 || num == 1)
    {
        printf("%d nao eh um numero primo.\n", num);
        return 0;
    }

    else if (num == 2)
    {
        printf("%d eh primo.\n", num);
        return 0;
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d nao eh um numero primo.\n", num);
            break;
        }

        else
        {
            printf("%d eh primo.\n", num);
            break;
        }
    }
    return 0;
}
