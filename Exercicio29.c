//29.  Faça  um  algoritmo  que  receba  o  preço  de  um  produto,  calcule  e  mostre  o  novo  preço,  sabendo-se que este sofreu um desconto de 10%. 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float preco;
		
	printf("Digite o preco do produto: ");
	scanf("%f", &preco);
	
        float precoDec = preco - (10 * preco)/100;
          
          printf("O preco com desconto de 10 porcento ficara: %.2f", precoDec);
          
      }
