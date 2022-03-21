/*9) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.*/

# include <stdio.h>

int main (int_a,_b,_aux)
{
// Variaveis
int a = 10;
int b = 20;
int aux = a;
b = aux;

// Entrada de Dados
printf(" Mostre aux: %d", aux);
printf("\n Mostre b: %d", b);
// Processamemto

printf("a= ");
scanf("%d",&a);
printf("b= ");
scanf("%d",&b);

trocar(&a,&b);

printf(" a = %d\n",a);
printf(" b = %d\n",b);

// Final do Codigo
getch ();

}

