//36. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float salarioMin, seuSalario, Qtd;
		
	printf("Digite o salario minimo atual ");
	scanf("%f", &salarioMin);
		printf("Digite seu salario ");
	scanf("%f", &seuSalario);

        Qtd = seuSalario/salarioMin;
          
          printf("Voce recebe %.2f salarios minimos", Qtd);
          
      }
