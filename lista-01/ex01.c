#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Digite um número: ");
    scanf("%f", &x);
    float n = x * 2;
    printf("O dobro é %6.2f", n);
    return 0;
}