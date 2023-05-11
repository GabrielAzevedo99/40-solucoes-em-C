/* 7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano.
 Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        int dia, mes; 
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mes(ex:3): ");
	scanf("%d", &mes);
	
          if(mes == 1 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", dia);
          }
          else if(mes == 2 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 30+dia);
          }
          else if(mes == 3 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 60+dia);
          }
          else if(mes == 4 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 90+dia);
          }
          else if(mes == 5 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 120+dia);
          }
          else if(mes == 6 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 150+dia);
          }
          else if(mes == 7 && dia <= 30 ) { 
         printf("Passaram %d  Dias, desde o inicio do ano", 180+dia);
          }
          else if(mes == 8 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 210+dia);
          }
          else if(mes == 9 && dia <= 30 ) { 
          printf("Passaram %d  Dias, desde o inicio do ano", 240+dia);
          }
          else if(mes == 10 && dia <= 30 ) { 
         printf("Passaram %d  Dias, desde o inicio do ano", 270+dia);
          }
          else if(mes == 11 && dia <= 30 ) { 
         printf("Passaram %d  Dias, desde o inicio do ano", 300+dia);
          }
          else if(mes == 12 && dia <= 30 ) { 
         printf("Passaram %d  Dias, desde o inicio do ano", 330+dia);
          }else{
          printf("*Dia ou mes INVALIDO "); 
	
}
}
