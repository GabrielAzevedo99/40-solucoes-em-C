/*39.Jo�o  recebeu  seu  sal�rio  de  R$  1200,00  e  precisa  pagar  duas  contas  (C1=R$  200,00  e  C2=R$120,00) que est�o atrasadas.
 Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre quanto restar� do sal�rio do Jo�o */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 
        float salario = 1200;
        int C1 = 204;
        float C2 = 122.4;
          
          printf("Com o salario de 1200 e seus devidos descontos sobrara: %.2f", (salario - (C1 + C2)));
          
      }
