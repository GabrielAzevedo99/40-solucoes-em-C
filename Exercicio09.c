/* 9.  Uma  fábrica  de  camisetas  produz  os  tamanhos  pequeno,  médio  e  grande,  cada  uma  sendo  vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usuário forneça a quantidade  de  camisetas  pequenas,  médias  e  grandes  referentes  a  uma  venda, 
e  a  máquina  informe quanto será o valor arrecadado. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        int QdtCamisaP, QdtCamisaM, QdtCamisaG; 
	
	printf("Digite quantas camisas pequenas voce quer: ");
	scanf("%d", &QdtCamisaP);
	printf("Digite quantas camisas medias voce quer: ");
	scanf("%d", &QdtCamisaM);
	printf("Digite quantas camisas grandes voce quer: ");
	scanf("%d", &QdtCamisaG);
	
    int valorCamisaP = QdtCamisaP * 10;
    int valorCamisaM = QdtCamisaM * 12;
    int valorCamisaG = QdtCamisaG * 15;
	
	printf("O valor arrecadado em camisas sera: %.2d Reais", valorCamisaP + valorCamisaM + valorCamisaG);
	
}
