/*3) Cada degrau de uma escada tem uma altura X. Fa�a um programa para ler essa altura e a altura que o
usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para
atingir o seu objetivo.*/

#include <stdio.h>
#include <math.h>

int main (void)
{

    float deg, alt, tot;

    //Entrada de dados
    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%f", &deg);
    printf("Digite a altura desejada em metros: ");
    scanf("%f", &alt);


    //Processamento de dados
    tot = ceil((alt * 100) / deg);


    //Saida de dados
    printf("Para chegar a altura desejada, eh necessario subir %.0f degraus", tot);


return 0;
}
