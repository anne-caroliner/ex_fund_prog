/*5.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o programa aprender a definição
para DeveEsperar? Existem os seguintes atributos para descrever as situações:
Fregueses: Quantas pessoas estão no restaurante (nenhuma, algumas, cheio)?
Tempo de espera (em minutos): 0-10, 10-30, 30-60, >60.
Alternativa: Há um restaurante alternativo na redondeza?
Reserva: Foi feita uma reserva?
Bar: Existe um bar confortável onde possa se esperar?
Sex/Sab: É sexta ou sábado?
Faminto: Está com fome?
Chovendo: Está chovendo lá fora?
As entradas são do tipo char, exceto o tempo de espera que pode ser do tipo int. Portanto, estabeleça uma letra para
cada entrada esperada, por exemplo 'S' para sim e 'N' para não.*/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    //Declaraçao de variaveis
    char letra; //s=sim, n=nao ou nenhuma, a=algumas, c=cheio
    int tempoEspera;

    //Entrada de dados
    printf("\nInforme quantas pessoas estao no restaurante.\nUse:'n' para nenhuma, 'a' para algumas e 'c' para cheio\n ");
    scanf("%c", &letra);

    switch(letra)
    {
        case 'n':
            printf("Nao");
        break;
        case 'a':
            printf("Sim");
        break;
        case 'c':
            Printf("Tempo de espera (em minutos): ");
            scanf("%d", &tempoEspera);
        break;

    default:
        break;
    }
    if (tempoEspera > 60)
        {
        printf("Nao");
        }
        else if (tempoEspera >= 0 && tempoEspera <= 60)
        {
        printf("Sim");
        }

        else if (tempoEspera >= 30 && tempoEspera <= 60)
        {
            printf("Ha um restaurante alternativo na redondeza?\nUse 's' para sim e 'n' para nao: ");
            fflush(stdin);
            scanf("%c", &letra);
            switch (letra)
            {
            case 's':
                printf("\nEh sexta ou sabado? ");
                printf("\nInforme 's' para sim ou n para 'n': ");
                fflush(stdin);
                scanf("%c", &letra);
                switch (letra)
                {        
                case 's':
                    printf("Sim");
                    break;
                case 'n':
                    printf("Nao");
                    break;
                default:
                    break;
                }

                break;
            case 'n'
                printf("\nFoi feita a reserva? ");
                printf("\nInforme 's' para sim ou n para 'n': ");
                fflush(stdin);
                scanf("%c", &letra);
                switch (letra)
                {
                case 's':
                    printf("Sim");
                    break;
                case 'n':
                    printf("Existe um bar confortavel onde possa se esperar?");
                    printf("\nInforme 's' para sim ou n para 'n': ");
                    fflush(stdin);
                    scanf("%c", &letra);
                    switch (letra)
                    {
                    case 's':
                        printf("Sim");
                        break;
                    case 'n':
                        printf("Nao");
                        break;
                    default:
                        break;
                    }
                break;
            default:
                break;
            }
        }
        else if (tempoEspera >= 10 && tempoEspera < 30)
        {
            printf("\nEsta com fome?");
            printf("\nInforme 's' para sim ou n para 'n': ");
            fflush(stdin);
            scanf("%c", &letra);
            switch (letra)
            {
            case 's':
                printf("Ha um restaurante alternativo na redondeza?\nUse 's' para sim e 'n' para nao: ");
                fflush(stdin);
                scanf("%c", &letra);
                break;
                switch (letra)
                {
                case 's':
                    printf("\nEsta chovendo la fora?");
                    printf("\nInforme 's' para sim ou n para 'n': ");
                    fflush(stdin);
                    scanf("%c", &letra);
                   switch (letra)
                    {
                    case 's':
                        printf("Sim");
                        break;
                    case 'n':
                        printf("Nao");
                        break;
                    default:
                        break;
                    }
                    break;
                case 'n':
                    printf("Nao");
                    break;
                default:
                    break;

                }
            case 'n':
                printf("Nao");
                break;    
            default:
                break;
                }
                    
        }






    



    return 0;
}