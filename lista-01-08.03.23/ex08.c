// Calcular e exibir o perímetro de uma circunferência recebendo seu raio. A 
// fórmula para o cálculo é C = 2 * pi * r (utilizar  = 3.14).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float r;

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &r);

    float p = 2 * 3.14 * r; 

    printf("O perímetro da circunferência é: %4.2fcm", p);

    return 0;
}