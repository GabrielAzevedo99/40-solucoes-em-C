/* 1.  A  imobili�ria  Im�bilis  vende  apenas  terrenos  retangulares.
  Fa�a  um  algoritmo  para  ler  as  dimens�es de um terreno e depois exibir a �rea do terreno. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int base, altura, area;
	
	printf("ENTRE COM A BASE = ");
	scanf("%d", &base);
	
	printf("ENTRE COM A ALTURA= ");
	scanf("%d", &altura);
	
	area=base*altura;
	
	printf("Valor da area = %d\n", area);
	
}
