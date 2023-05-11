/*15. Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar.
 Faça um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos  e  André  não  paguem  centavos.
 Ex:  uma  conta  de  R$101,53  resulta  em  R$33,00  para  Carlos, R$33,00 para André e R$35,53 para Felipe. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

          float ValorCompra, ValorFelipe;
          int ValorCarlos,ValorAndre; 
		
	printf("Digite o valor total da conta: ");
	scanf("%f", &ValorCompra);
	
             ValorCarlos = (33 * ValorCompra)/100;
             ValorAndre = (33 * ValorCompra)/100;
             ValorFelipe = ValorCompra - (ValorCarlos + ValorAndre);  
          
          printf("O valor da compra deu %.2f para Carlos, %d  Para Andre %d e para Felipe %.2f",ValorCompra, ValorCarlos, ValorAndre, ValorFelipe);
          
      }
