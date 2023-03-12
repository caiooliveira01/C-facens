// Receber base  e  altura  de  um  triângulo,  calcular  sua  área  e  exibir o  valor 
// calculado. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float b, h;

    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &b);

    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &h);

    float a = (b * h) / 2;

    printf("A área do triângulo é: %4.2f", a);

    return 0;
}