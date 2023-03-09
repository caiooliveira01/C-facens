// Receber  um  comprimento  em  metros,  convertê-lo  para  centímetros  e 
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

    printf("A distância em centímetros é: %6.2fcm", d);

    return 0;
}