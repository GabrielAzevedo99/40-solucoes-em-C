/*16. A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hamb�rguer.
 Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer,
 e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

         int QtdSanduiche;
		
	printf("Digite a quantidade de sanduiches a fazer: ");
	scanf("%d", &QtdSanduiche);
	
              int queijoLanche = 50 * 2;
              int presuntoLanche = 50;
              int hamburguerLanche = 100;
          
              float QtdQueijo = queijoLanche * QtdSanduiche / 1000;
              float QtdPresunto = presuntoLanche * QtdSanduiche / 1000;
              float Qtdhamburguer = hamburguerLanche * QtdSanduiche / 1000; 
          
          printf("Para essa Qtad de lanche sera necessario %.2f Kg de queijo, %.2f Kg de presunto e %.2f  Kg de humburguer.", QtdQueijo, QtdPresunto, Qtdhamburguer);
          
      }
