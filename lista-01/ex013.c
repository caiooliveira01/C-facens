//  Uma  empresa  contrata  um  encanador  a  R$  35.00  por  dia.  Crie  um 
// programa  que  solicite  o  número  de  dias  trabalhados  pelo  encanador  e 
// mostre  o  valor  líquido  a  ser  pago,  sabendo  que  são  descontados  8%  de 
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

    printf("O valor líquido a ser pago ao encanador é de: R$%5.2f", vl);

    return 0;
}