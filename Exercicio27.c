/*27.  Faça  um  algoritmo  que  receba  dois  números,  calcule  e  mostre  a  divisão  do  primeiro  número  pelo  segundo.
  Sabe-se  que  o  segundo  número  não  pode  ser  zero,  portanto  não  é  necessário  se  preocupar com validações. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float numUm, numDois;
		
	printf("Digite um numero: ");
	scanf("%f", &numUm);
		printf("Digite outro numero: ");
	scanf("%f", &numDois);

        float numDivisao = numUm/numDois;
          
          printf("O primeiro numero dividido pelo segundo dara %.2f", numDivisao);
          
      }
