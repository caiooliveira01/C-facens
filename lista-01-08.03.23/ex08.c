// Calcular e exibir o per�metro de uma circunfer�ncia recebendo seu raio. A 
// f�rmula para o c�lculo � C = 2 * pi * r (utilizar  = 3.14).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float r;

    printf("Digite o valor do raio da circunfer�ncia: ");
    scanf("%f", &r);

    float p = 2 * 3.14 * r; 

    printf("O per�metro da circunfer�ncia �: %4.2fcm", p);

    return 0;
}