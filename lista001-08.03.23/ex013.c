//  Uma  empresa  contrata  um  encanador  a  R$  35.00  por  dia.  Crie  um 
// programa  que  solicite  o  n�mero  de  dias  trabalhados  pelo  encanador  e 
// mostre  o  valor  l�quido  a  ser  pago,  sabendo  que  s�o  descontados  8%  de 
// imposto de renda. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float dt;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &dt);

    float vl = 0.92 * (dt * 35);

    printf("O valor l�quido a ser pago ao encanador � de: R$%5.2f", vl);

    return 0;
}