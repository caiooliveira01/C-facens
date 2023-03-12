// Calcular e exibir o consumo médio de combustível de um veículo 
// recebendo  a  distância  percorrida  e  a  quantidade  de  combustível  gasto. 
// Consumo médio = distância percorrida (km) / combustível gasto (l). 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float d, c;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &d);

    printf("Digite a quantidade de combustível gasto (em L): ");
    scanf("%f", &c);

    float cm = d / c;
    
    printf("O consumo médio do percurso foi de: %6.2fkm/L", cm);

    return 0;
}