//28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float nota1, nota2;
		
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
		printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);

       float totalMedia = ((nota1 * 2) + (nota2 * 3))/5;
          
          printf("Voce ficou com a seguinte media ponderada: %.2f", totalMedia);
          
      }
