//36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      int num, resultado, i;
		
	printf("Digite um numero para aparecer sua tabuada ");
	scanf("%d", &num);	

        for (i = 1; i <= 10; i++) 
      
          printf("\n %d X %d = %d", num, i, num * i);
      
	  
      }
