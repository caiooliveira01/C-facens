// Criar um programa em Linguagem C que receba dois números inteiros e 
// retorne: o valor da divis�o e o resto da divis�o. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1, n2;

    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    printf("Digite outro n�mero: ");
    scanf("%d", &n2);

    float d = n1 / n2;
    float r = n1 % n2;

    printf("A divis�o inteira entre %4.0d e %4.0d �: %4.0f\n", n1, n2, d);
    printf("E resto da divis�o � %4.0f", r);

    return 0;
}