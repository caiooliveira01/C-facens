// Receber  um  comprimento  em  metros,  convert�-lo  para  cent�metros  e 
// mostrar o resultado. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float m;

    printf("Digite um valor em metros: ");
    scanf("%f", &m);

    float d = m * 100;

    printf("A dist�ncia em cent�metros �: %6.2fcm", d);

    return 0;
}