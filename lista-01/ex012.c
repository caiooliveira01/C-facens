// Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por 
// hora  extra.  Receber  o  total  de  horas  normais  e  o  total  de  horas  extras 
// trabalhadas por um empregado no mês. Calcular e exibir o salário dele. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float hn, he;

    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &hn);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &he);

    float s = (10 * hn) + (15 * he);

    printf("O salário desse empregado no mês foi de: R$%4.2f", s);


    return 0;
}