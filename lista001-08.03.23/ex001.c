// Receber um número, calcular seu dobro e exibir o resultado. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float x;

    printf("Digite um número: ");
    scanf("%f", &x);

    float n = x * 2;

    printf("O dobro de %4.2f é: %4.2f", x, n);

    return 0;
}