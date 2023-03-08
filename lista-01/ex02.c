// Receber dois valores, calcular sua média aritmética e exibir o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float n1, n2;

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    float m = n1 / n2;

    printf("A média entre %6.2f e %6.2f é: %6.2f", n1, n2, m);

    return 0;
}