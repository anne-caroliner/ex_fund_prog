/*4) Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float. */


#include <stdio.h>

int main(void)
{
    //declaracao de variaveis
    float nota1, nota2, nota3;
    int peso1, peso2, peso3;

    //entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%d", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%d", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%d", &peso3);


    //saida de dados
    printf("\nA media ponderada: %.2f",(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3));

return 0;

}


