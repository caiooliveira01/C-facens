// Receber dois valores, calcular sua m�dia aritm�tica e exibir o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float n1, n2;

    printf("Digite um n�mero: ");
    scanf("%f", &n1);

    printf("Digite outro n�mero: ");
    scanf("%f", &n2);

    float m = n1 / n2;

    printf("A m�dia entre %6.2f e %6.2f �: %6.2f", n1, n2, m);

    return 0;
}