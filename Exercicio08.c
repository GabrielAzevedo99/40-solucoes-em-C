/* 8.  Faça  um  algoritmo  para  ler  três  notas  de  um  aluno  em  uma  disciplina  e  imprimir  a  sua  média  ponderada (as notas tem pesos respectivos de 1, 2 e 3). */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        float nota1, nota2, nota3, valor2, valor3, media;
         
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	
    valor2 = (float) nota2 * 2;
    valor3 = (float) nota3 * 3;
    media = (float) (nota1 + valor2 + valor3) / 6;
	
	printf("Você ficou com a seguinte media na materia: %.2f", media);
	
}
