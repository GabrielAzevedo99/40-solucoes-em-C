/* 3. A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
 Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos),
e quanto deve guardar numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos,
 fa�a um algoritmo para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados. */

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
