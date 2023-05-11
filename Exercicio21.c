/*21.  A  fábrica  de  refrigerantes  Meia-Cola  vende  seu  produto  em  três  formatos:  lata  de  350  ml,  garrafa  de  600  ml  e  garrafa  de  2  litros.
  Se  um  comerciante  compra  uma  determinada  quantidade  de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

        int lata;
        int garrafa;
        int garrafaDois;
        double totalGarrafa;
		
	printf("Digite a quantidade de lada de 300 ml que comprou ");
	scanf("%d", &lata);
	printf("Digite a quantidade de garrafa de 600 ml que comprou ");
	scanf("%d", &garrafa);
	printf("Digite a quantidade de garrafa de 2 litros que comprou ");
	scanf("%d", &garrafaDois);
	
       totalGarrafa = (((lata * 300) + (garrafa * 600) + (garrafaDois * 2000))/1000); 
          
          printf("Voce comprou %.2f litros de refrigerante.", totalGarrafa);
          
      }
