// Receber  uma  temperatura  em  Fahrenheit  e  convert?-la  para  Celsius 
// através  da  seguinte  fórmula:  Celsius  =  (Fahrenheit  -  32)  /  1.8.  Exibir  o 
// valor em Celsius. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float tf;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tf);

    float tc = (tf - 32) / 1.8;

    printf("A temperatura de %3.2f°F é: %3.2f°C", tf, tc);


    return 0;
}