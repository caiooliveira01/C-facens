// A  velocidade  média  de  um  veículo  em  um  percurso  é  dada  através  da 
// distância percorrida pelo tempo, ou seja, Vm = ?S / ?t. Calcular e exibir a 
// velocidade  média  do  veículo  em  uma  estrada  recebendo  esses  dois 
// dados do percurso. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float d, t;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &d);

    printf("Digite o tempo gasto (em h): ");
    scanf("%f", &t);

    float vm = d / t;

    printf("A velocidade média do veículo foi de %6.2fkm/h", vm);


    return 0;
}