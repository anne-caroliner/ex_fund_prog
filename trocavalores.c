/*9) Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.*/

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

