// Receber base  e  altura  de  um  tri�ngulo,  calcular  sua  �rea  e  exibir o  valor 
// calculado. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float b, h;

    printf("Digite o valor da base do tri�ngulo: ");
    scanf("%f", &b);

    printf("Digite o valor da altura do tri�ngulo: ");
    scanf("%f", &h);

    float a = (b * h) / 2;

    printf("A �rea do tri�ngulo �: %4.2f", a);

    return 0;
}