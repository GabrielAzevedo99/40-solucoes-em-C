/*11.  Uma  f�brica  controla  o  tempo  de  trabalho  sem  acidentes  pela  quantidade  de  dias.
  Fa�a  um  algoritmo para converter este tempo em anos, meses e dias. Assuma que cada m�s possui sempre 30 dias. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        int dias, anos, mes; 
	
	printf("Informe quantos dias estao sem acidentes: ");
	scanf("%d", &dias);
	
	
    anos = (int) floor (dias / 360);
     
     mes = (int) floor (dias / 30);
    
	printf("fazem: %d ano(s), %d mes(es) ou %d dias sem acidentes. ", anos, mes, dias);
	
}
