/*5) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida.
5.1) A figura a seguir apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma
instituição financeira. Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo
char, portanto, considere a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente
dos aceitáveis, apresente a mensagem "Caractere inválido".*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    //Declaraçao de variaveis
    char letra;

    //Entrada de dados
    printf("\n Saldo em conta\n");
    printf("Informe P para positivo ou N para negativo: ");
    scanf("%c", &letra);

    //Processamento e saida de dados
    switch  (letra)
    {
        case 'p':
            printf("Cliente sem risco");
            break;
        case 'n':
            printf("\nAplicacoes\n");
            printf("Informe P para positivo ou N para negativo: ");
            fflush(stdin);
            scanf("%c",&letra);
            switch (letra)
            {  
            case 'n':
                printf("\nCliente com risco");
                break;          
            case 'p':
                printf("\nCliente sem risco");
                break;
            }
            
        default:
        break;
            printf("\nCaractere invalido");            
        break;
    }


    return 0;
}
    