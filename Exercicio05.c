/* 5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do litro da gasolina e o valor do pagamento,
e exibir quantos litros ele conseguiu colocar no tanque. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        float precoGasolina, valorGastar, litrosTotal; 
	
	printf("Digite o preco atual da gasolina: ");
	scanf("%f", &precoGasolina);
	printf("Digite quanto quer gastar com gasolina: ");
	scanf("%f", &valorGastar);
	
    litrosTotal =(float) valorGastar / precoGasolina;
	
	printf(" Com esse valor voce conseguira colocar  %.2f Litros de gasolina", litrosTotal);
	
}
