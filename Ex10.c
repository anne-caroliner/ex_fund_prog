/*10) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,
55, ... , etc.*/

#include <stdio.h>

int get_fibonacci(int num);

int main(void)
{
    int fibonacci = 0;

    printf("Digite o tamanho da sequencia de fibonacci desejada: ");
    scanf("%d", &fibonacci);

    // F(n + 2) = F(n + 1) + F(n) , com n ≥ 1 e F(1) = F(2) = 1 .

    printf("A sequencia de fibonacci ate o %d%c numero: ", fibonacci, 167);

    for (int i = 0; i < fibonacci; i++)
        printf("%d\t", get_fibonacci(i + 1));
}

// Recursão pra sequencia de fibonacci
int get_fibonacci(int num)
{
    
    if (num == 1 || num == 2)
        return 1;

    
    else
        return get_fibonacci(num - 1) + get_fibonacci(num - 2);
    
    return 0;
}
