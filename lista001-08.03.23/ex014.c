// A disciplina Algoritmos e Programa��o � dividida em duas partes: teoria e 
// pr�tica. Na teoria, s�o aplicadas duas provas (com nota de 0 a 10 cada) e 
// na  pr�tica  tamb�m.  A  nota  final  do  semestre  �  composta  pelas  m�dias 
// das provas de teoria e pr�tica, mas a teoria tem peso de 60%, enquanto a 
// pr�tica  tem  peso  de  40%.  Receba  as  notas  de  um  aluno  em  cada  prova 
// te�rica e pr�tica e mostre a nota final do semestre. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float t1, t2, p1, p2; 

    printf("Digite a nota da prova te�rica 1: ");
    scanf("%f", &t1);

    printf("Digite a nota da prova te�rica 2: ");
    scanf("%f", &t2);

    printf("Digite a nota da prova pr�tica 1: ");
    scanf("%f", &p1);

    printf("Digite a nota da prova pr�tica 2: ");
    scanf("%f", &p2);

    float m = (0.6 * (t1 + t2) + 0.4 * (p1 + p2)) / 2;

    printf("A m�dia do aluno foi de %2.2f pontos\n", m);
    if (m >= 5)
    {
        printf("O aluno foi aprovado");
    }
    else 
    {
        printf("O aluno foi reprovado");
    }

    return 0;
}