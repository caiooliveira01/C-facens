// A  velocidade  m�dia  de  um  ve�culo  em  um  percurso  �  dada  atrav�s  da 
// dist�ncia percorrida pelo tempo, ou seja, Vm = ?S / ?t. Calcular e exibir a 
// velocidade  m�dia  do  ve�culo  em  uma  estrada  recebendo  esses  dois 
// dados do percurso. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float d, t;

    printf("Digite a dist�ncia percorrida (em km): ");
    scanf("%f", &d);

    printf("Digite o tempo gasto (em h): ");
    scanf("%f", &t);

    float vm = d / t;

    printf("A velocidade m�dia do ve�culo foi de %6.2fkm/h", vm);


    return 0;
}