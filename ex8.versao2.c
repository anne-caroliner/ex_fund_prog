/*Use WHILE
8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.*/

#include <stdio.h>

int main(void)
{
    int idade=1, contBras=0, contEstr=0, contBSCS=0, somaBSCS=0, primeiro=0, menor=0;
    char nac, sup;
    float media;

    while(idade>0 && idade<120)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade>0 && idade<120)
        {
            do
            {
                printf("Informe a nacionalidade (B/b/E/e): ");
                setbuf(stdin, NULL);
                scanf("%c", &nac);

                if(nac!='B' && nac!='b' && nac!='E' && nac!='e')
                {
                    printf("Nacionalide invalida\n");
                }
            }
            while(nac!='B' && nac!='b' && nac!='E' && nac!='e');

            do
            {
                printf("Tem curso superior (S/s/N/n)? ");
                setbuf(stdin, NULL);
                scanf("%c", &sup);

                if(sup!='N' && sup!='n' && sup!='S' && sup!='s')
                {
                    printf("caractere invalid0\n");
                }
            }
            while(sup!='N' && sup!='n' && sup!='S' && sup!='s');

            if(nac=='B' || nac=='b')
            {
                contBras++;

                if(sup=='N' || sup=='n')
                {
                    contBSCS++;
                    somaBSCS = somaBSCS+idade;
                }
            }
            else
            {
                contEstr++;

                if(sup=='S' || sup=='s')
                {
                    if(primeiro == 0)
                    {
                        menor = idade;
                        primeiro = 1;
                    }
                    else
                    {
                        if(idade < menor)
                        {
                            menor = idade;
                        }
                    }
                }
            }
        }
    }

    printf("\nQuantidade de brasileiros: %d\n", contBras);
    printf("Quantidade de estrangeiros: %d\n", contEstr);

    if(contBSCS>0)
    {
        media = (float)somaBSCS/contBSCS;
        printf("Media dos brasileiros sem curso superior: %.2f\n", media);
    }

    printf("Menor idade dos estrangeiros com curso superior: %d\n", menor);

    return 0;
}