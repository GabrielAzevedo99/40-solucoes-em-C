//40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float catetoTri, catetoTri1;
		
	printf("Digite o cateto do triangulo: ");
	scanf("%f", &catetoTri);
		printf("Digite segundo cateto do triangulo: ");
	scanf("%f", &catetoTri1);

        float hipotenusa = sqrt(pow(catetoTri , 2) + pow(catetoTri1 , 2));
        
          printf("O valor da hipotenuza e: %f", hipotenusa);
          
      }
