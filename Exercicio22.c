/*22.  Pedrinho  tem  um  cofrinho  com  muitas  moedas,  e  deseja  saber  quantos  reais  conseguiu  poupar.
  Faça  um  algoritmo  para  ler  a  quantidade  de  cada  tipo  de  moeda,  e  imprimir  o  valor  total  economizado,  em  reais.
  Considere  que  existam  moedas  de  1,  5,  10,  25  e  50  centavos,  e  ainda  moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

        int cemUm;
        int cemCinco;
        int cemDez;
        int cemVinteCinco;
        int cemCinquenta;
        int umReal;
        double totalReal;
		
	printf("Digite quantas moedas de 1 centavo poupou: ");
	scanf("%d", &cemUm);
	printf("Digite quantas moedas de 5 centavo poupou: ");
	scanf("%d", &cemCinco);
	printf("Digite quantas moedas de 10 centavo poupou: ");
	scanf("%d", &cemDez);
	printf("Digite quantas moedas de 25 centavo poupou: ");
	scanf("%d", &cemVinteCinco);
	printf("Digite quantas moedas de 50 centavo poupou: ");
	scanf("%d", &cemCinquenta);
	printf("Digite quantas moedas de 1 real poupou: ");
	scanf("%d", &umReal);

	
   totalReal = (((cemUm * 1) + (cemCinco * 5) + (cemDez * 10) + (cemVinteCinco* 25) + (cemCinquenta* 50) + (umReal* 100))/100);
          
          printf("Voce juntou %.2f Reais em seu cofre", totalReal);
          
      }
