/* 3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
 Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos),
e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos,
 faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

     int paes, broa;
    double valorBroa, valorpaes, lucroDoDia, valorGuardar;
	
	printf("Digite quantos paes vendeu: ");
	scanf("%d", &paes);
	printf("Digite quantas broas vendeu: ");
	scanf("%d", &broa);
	
    valorpaes =(double) paes * 0.12;
    valorBroa =(double) broa * 1.50;
    lucroDoDia =(double) valorpaes + valorBroa;
    valorGuardar =(double) 10 * lucroDoDia / 100;
	
	printf("Lucro do dia com paes e broas %.2f Valor a guardar= %.2f\n", lucroDoDia, valorGuardar);
	
}
