// Receber um n�mero e calcular o valor de sua raiz quadrada e sua oitava 
// pot�ncia. Utilize as fun��es pow(base,expoente) e sqrt(num) da biblioteca 
// <math.h>. Mostrar os valores obtidos. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float n;

    printf("Digite um n�mero: ");
    scanf("%f", &n);

    float rq = sqrt(n);
    float p = pow(n, 8);

    printf("O valor da raiz quadrada de %6.2f �: %6.2f\n", n, rq);
    printf("O valor da oitava pot�ncia de %6.2f �: %6.2f", n, p);

    return 0;
}