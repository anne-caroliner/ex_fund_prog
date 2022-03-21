/*10) Uma industria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler a
quantidade e a respectiva categoria (M, F ou I). Apos o loop, calcular e mostrar o
percentual de produtos por categoria. Validar para que seja informada uma categoria
valida. Finalizar a leitura quando informado um valor 0 ou negativo para a quantidade. Ler
inicialmente a quantidade e depois a categoria. Se informada uma quantidade negativa,
nao ler a categoria.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
   
    int quantidade, categoria, somaMasculino = 0, somaInfantil = 0, somaFeminino = 0, somaTodos = 0;
   
    do
    {
        printf("Informe a quantidade: ");
        scanf("%d", &quantidade);
        setbuf(stdin, NULL);
    }
    while (quantidade < 0);

    somaTodos += quantidade;
   
    while (quantidade > 0)
    {
       
        do
        {
            printf("Informe a categoria - Masculino(M), Feminino(F), Infantil(I): ");
            scanf("%c", &categoria);
            setbuf(stdin, NULL);
        
            categoria = toupper(categoria);

            if (categoria != 'M' && categoria != 'F' && categoria != 'I')
                printf("Categoria invalida!\n");
        }
        while(categoria != 'M' && categoria != 'F' && categoria != 'I');

        switch(categoria)
        {

            case 'M':
            somaMasculino += quantidade;
            break;

            case 'F':
            somaFeminino += quantidade;
            break;

            case 'I':
            somaInfantil += quantidade;
            break;
        }
        
        do
        {
            printf("Informe a quantidade: ");
            scanf("%d", &quantidade);
            setbuf(stdin, NULL);
        }
        while (quantidade < 0);

        somaTodos += quantidade;
    }
    
    printf("\n%.1f%% Feminino\n%.1f%% Masculino\n%.1f%% Infantil\n", (float)somaFeminino * 100/ somaTodos, (float)somaMasculino *100/ somaTodos, (float)somaInfantil *100/ somaTodos);

}
