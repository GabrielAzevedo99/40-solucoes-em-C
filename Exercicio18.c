/*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
 Fa�a  um  algoritmo  para  calcular  e  imprimir  o  sal�rio  bruto  e  o  sal�rio  l�quido  de  um  determinado  funcion�rio.
 Considere  que  o  sal�rio  l�quido  �  igual  ao  sal�rio  bruto  descontando-se  10%  de  impostos. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    int horasTrabalho, diasTrabalho, horaExt;
		
	printf("Digite suas horas de trabalho normal no dia: ");
	scanf("%d", &horasTrabalho);
	printf("Digite quantas dias trabalha no mes: ");
	scanf("%d", &diasTrabalho);
	printf("Digite quantas horas extras fez no mes: ");
	scanf("%d", &horaExt);
	
    int QtdHoras = horasTrabalho * diasTrabalho;
    float salaSemDes = (QtdHoras * 10) + (horaExt * 15);
    float desconto = (10 * salaSemDes)/100;
    float salaTotal = salaSemDes - desconto;
          
          printf("Voce ganhara: %.2f", salaTotal);
          
      }
