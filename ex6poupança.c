/*6) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada1
. Para calcular seu rendimento,
ela dever� fornecer o valor constante da aplica��o mensal, a taxa de juros (%) e o prazo da aplica��o (em
meses).*/

#include <stdio.h>
#include <math.h>

int main (void)

{
    //Declara��o das variaveis
        /*  vm = valor constante da aplica��o
            i = taxa
            n = numero de meses*/

    float vm, i, n, acumulado;

    //Entrada de dados
    acumulado = vm * ((1+i)* n - 1) /i);

    //Processamento de dados
    printf ("Digite o valor da aplicacao mensal: ");
    scanf("%f",&vm);
    printf ("Digite a taxa: ");
    scanf ("%f",&i);
    printf ("Digite o numero de meses: ");
    scanf ("%f",&n);

    //Saida de dados
    printf ("Voce tem %f de poupanca", acumulado);

    return 0;

}
