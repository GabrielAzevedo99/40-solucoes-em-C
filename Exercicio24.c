/*24.  Um  tonel  de  refresco  �  feito  com  8  partes  de  �gua  mineral  e  2  partes  de  suco  de  maracuj�.
 Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio). */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    int litrosRefresco;
		
	printf("Digite a quantidade de refresco desejada em litros: ");
	scanf("%d", &litrosRefresco);

        double QtdeAgua = litrosRefresco * 8 / 10;
        double QtdeSuco = litrosRefresco * 2 / 10;
          
          printf("Para fazer essa quantidade de refresco sera necessario %.2f lt de agua e %.2f tl de suco", QtdeAgua, QtdeSuco);
          
      }
