//36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.

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
