/*– Implemente e teste uma função que leia uma string e imprima as palavras em ordem
inversa à lida. Considere que cada palavra pode ser separada por uma quantidade qualquer de espaços.*
/* Programa em C para reverter a ordem das palavras.*/
#include <stdio.h>
#include <string.h>
#define Tamanho_Maximo 100 // tamanho maximo da string

int main()
{
    char string[100], reverter[100];
    int len, i, home, palavraInicial, palavraFinal;

    printf("Informe uma frase: ");
    gets(string);

    len = strlen(string);
    home = 0;
    // Inicializa a checagem da palavra final e da palavra inicial na string
    palavraInicial = len - 1;
    palavraFinal = len - 1;
    while (palavraInicial > 0)
    {
        // Identifica as palavras
        if (string[palavraInicial] == ' ')
        {
            // Adiciona palavra para inversão da string
            i = palavraInicial + 1;
            while (i <= palavraFinal)
            {
                reverter[home] = string[i];

                i++;
                home++;
            }
            reverter[home++] = ' ';

            palavraFinal = palavraInicial - 1;
        }

        palavraInicial--;
    }
    // Adiciona a ultima palavra
    for (i = 0; i <= palavraFinal; i++)
    {
        reverter[home] = string[i];
        home++;
    }
    // Adiciona NULL caracteres no final da inversão
    reverter[home] = '\0';
    printf("Texto Lido  \n%s\n\n", string);
    printf("Saida do programa \n%s", reverter);
    return 0;
}