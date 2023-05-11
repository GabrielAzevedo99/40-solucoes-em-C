//32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float pesoKg, pesoGr;
		
	printf("Digite seu peso em kg: ");
	scanf("%f", &pesoKg);

     pesoGr = pesoKg * 1000;    
          
          printf("O seu peso em gramas e: %.2f", pesoGr);
          
      }
