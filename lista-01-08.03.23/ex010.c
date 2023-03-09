// Calcular e exibir o consumo m�dio de combust�vel de um ve�culo 
// recebendo  a  dist�ncia  percorrida  e  a  quantidade  de  combust�vel  gasto. 
// Consumo m�dio = dist�ncia percorrida (km) / combust�vel gasto (l). 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float d, c;

    printf("Digite a dist�ncia percorrida (em km): ");
    scanf("%f", &d);

    printf("Digite a quantidade de combust�vel gasto (em L): ");
    scanf("%f", &c);

    float cm = d / c;
    
    printf("O consumo m�dio do percurso foi de: %6.2fkm/L", cm);

    return 0;
}