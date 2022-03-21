/*9) Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.*/

#include <stdio.h>

int main(void)
{
    int num = 0;
    
    int count[6];
    for (int i = 0; i < 6; i++)
        count[i] = 0;
    printf("Informe um valor: ");
    scanf("%d", &num);

    do
    {
    
        if(num < 10 || num > 100)
            count[0]++;

        if (num % 2 == 1)
            count[1]++;

        if (num % 10 == 0)
            count[2]++;

        if (num >= 0 && num <= 10)
            count[3]++;

        if (num == 30)
            count[4]++;

        if (num != 10 && num != 20 && num != 30)
            count[5]++;

        printf("Informe um valor: ");
        scanf("%d", &num);
    }
    while(num >= 0);
    
   
    printf("%d Numero(s) menores que 10 e maiores que 100\n", count[0]);
    printf("%d Numero(s) impares\n", count[1]);
    printf("%d Numero(s) multiplos de 10\n", count[2]);
    printf("%d Numero(s) no intervalo entre 0 e 10\n", count[3]);
    printf("%d Numero(s) igual(is) a 30\n", count[4]);
    printf("%d Numero(s) diferente(s) de 10, 20 ou 30\n", count[5]);


    return 0;
    
}
