//26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float numUm, numDois, numTres;
		
	printf("Digite o primeiro numero: ");
	scanf("%f", &numUm);
		printf("Digite o segundo numero: ");
	scanf("%f", &numDois);
	printf("Digite o terceiro numero: ");
	scanf("%f", &numTres);

       float numMult = (numUm * numDois * numTres);
          
          printf("A multiplicacao desdes tres numeros dara: %.2f", numMult);
          
      }
