/* 2.  Fa�a  um  algoritmo  para  calcular  quantas  ferraduras  s�o  necess�rias  para  equipar  todos  os  cavalos comprados para um haras. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

double numCavalos, numFeraduras;
	
	printf("Digite quantos cavalos comprou para o harado: ");
	scanf("%d", &numCavalos);
	
     numFeraduras =(double) numCavalos * 4;
	
	printf("Numeros de feraduras necessarias = %d\n", numFeraduras);
	
}
