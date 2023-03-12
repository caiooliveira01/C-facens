// Receber o ano de nascimento de uma pessoa e mostrar 
// aproximadamente quantos dias de vida ela tem. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a;

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &a);

    int d = (2023 - a) * 365;

    printf("Em 2023, você tem aproximadamente %6.0d dias", d);

    return 0;
}