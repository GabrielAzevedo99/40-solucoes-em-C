//36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.

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
