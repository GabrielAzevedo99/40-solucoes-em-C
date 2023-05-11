/* 4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela  possui.
Considere  sempre  anos  completos,  e  que  um  ano  possui  365  dias.  Ex:  uma  pessoa  com 19 anos possui 6935 dias de vida;
veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        int idade, diasVida;
        char nome [10];
	
	printf("Digite seu nome: ");
	scanf("%d", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
    diasVida = idade * 365;
	
	printf("%f Voce ja viveu Valor %f Dias", nome, diasVida);
	
}
