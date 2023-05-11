/*38.  Faça  um  algoritmo  que  receba  o  ano  de  nascimento  de  uma  pessoa  e  o  ano  atual,  calcule  e  mostre:
 a) a idade dessa pessoa em anos; b) a idade dessa pessoa em meses; c) a idade dessa pessoa em dias; d) a idade dessa pessoa em semanas. */ 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      int anoAtual, anoNasc;
		
	printf("Digite o ano atual ");
	scanf("%d", &anoAtual);
		printf("Digite o ano que nasceu ");
	scanf("%d", &anoNasc);

        int anos = anoAtual - anoNasc;
        int meses = anos * 12;
        int dias = meses * 360;
        int semana = dias / 7;
        
          printf("Voce tem %d anos, %d meses, %d dias e %d semanas de vida", anos, meses, dias, semana);
          
      }
