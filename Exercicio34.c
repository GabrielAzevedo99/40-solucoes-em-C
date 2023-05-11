//34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado; 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float A, lado;
		
	printf("Digite o lado ");
	scanf("%f", &lado);

        A = lado * lado;
          
          printf("A area do quadrado e: %.2f", A);
          
      }
