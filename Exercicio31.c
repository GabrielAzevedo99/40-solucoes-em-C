/*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
 a) o novo peso se a pessoa engordar 15% sobre o peso digitado; b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float peso, p15, p20;
		
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
        p15 = peso / 100 * 15 + peso;
        p20 = peso - ((peso / 100) * 20);
          
          printf("Novo peso 15 porcento a mais: %.2f \nNovo peso com 20 porcento a menos: %.2f", p15, p20);
          
      }
