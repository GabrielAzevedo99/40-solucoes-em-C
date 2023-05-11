//25. Calcule o volume de uma caixa d'água cilíndrica. 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float raio, altura, volumeCaixaAgua;
		
	printf("Digite o raio da caixa de agua: ");
	scanf("%f", &raio);
		printf("Digite a altura da caixa de agua: ");
	scanf("%f", &altura);

        double pi = 3.14;
        
        volumeCaixaAgua = (pi * raio * raio * altura);
          
          printf("O volume da caixa de agua e: %.2f", volumeCaixaAgua);
          
      }
