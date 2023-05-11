/* 6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição.
Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
 Assuma que a balança já desconte o peso do prato. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        float pesoPrato  = 0.800;
        float pesoComida, valorPagar;
        int precoQuilo = 12;
	
	printf("Digite peso do prato total(ex: 1.5kg): ");
	scanf("%f", &pesoComida);
	
    valorPagar =(float) pesoComida * precoQuilo - pesoPrato;
	
	printf("O peso do prato ficou %.2f Kg, valor a pagar %.2f ", pesoComida, valorPagar);
	
}
