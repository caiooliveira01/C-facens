// Criar um programa em Linguagem C que receba dois números inteiros e 
// retorne: o valor da divisão e o resto da divisão. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    float d = n1 / n2;
    float r = n1 % n2;

    printf("A divisão inteira entre %4.0d e %4.0d é: %4.0f\n", n1, n2, d);
    printf("E resto da divisão é: %4.0f", r);

    return 0;
}