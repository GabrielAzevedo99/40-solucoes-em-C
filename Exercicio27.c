/*27.  Fa�a  um  algoritmo  que  receba  dois  n�meros,  calcule  e  mostre  a  divis�o  do  primeiro  n�mero  pelo  segundo.
  Sabe-se  que  o  segundo  n�mero  n�o  pode  ser  zero,  portanto  n�o  �  necess�rio  se  preocupar com valida��es. */

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
