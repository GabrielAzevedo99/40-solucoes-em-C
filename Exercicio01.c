/* 1.  A  imobiliária  Imóbilis  vende  apenas  terrenos  retangulares.
  Faça  um  algoritmo  para  ler  as  dimensões de um terreno e depois exibir a área do terreno. */

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
