/*12) Calcule e mostre a m�dia de idade de tr�s pessoas.*/

#include <stdio.h>


 int main(void)

{
/*
Fa�a um programa que receba v�rias idades e que
calcule e mostre a m�dia das idades digitadas.
Finalize digitando idade igual a zero.
*
int idades, soma_idades=0, qtde_idades, i;
float media;

printf("Quantas idades ser�o utilizadas...: ");
scanf ("%d", &qtde_idades);

for(i=1;i<=qtde_idades;i++){
printf("Entre com a idade %d...: ",i);
scanf("%d", &idades);
soma_idades = soma_idades + idades;
}
media = soma_idades / qtde_idades;
printf ("\nA media de idades eh de ..: %.1f", media);

scanf("%s");
}
