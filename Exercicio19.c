/*19. A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito  do  frango  h�  um  anel  com  um  chip  de  identifica��o;
  no  p�  esquerdo  s�o  dois  an�is  para  indicar o tipo de alimento que ele deve consumir.
  Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    int frangos;
		
	printf("Digite quantos frangos voce tem: ");
	scanf("%d", &frangos);
	
    int chipDir = 4;
     float chipEsq = 2 * 3.50;
     
     float gastoTotal = (frangos * chipDir) + (frangos * chipEsq);
          
          printf("O gasto total para marcacao dos frangos sera: %.2f", gastoTotal);
          
      }
