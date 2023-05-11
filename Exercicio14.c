//14. Calcule a área de uma pizza que possui um raio R (pi=3.14).

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    float raio;
		
	printf("Digite o raio da pizza: ");
	scanf("%f", &raio);
	
	     float pi = 3.14;

          float area = pi * raio * raio;
          
          printf("A area da pizza e: %.2f", area);
          
      }
