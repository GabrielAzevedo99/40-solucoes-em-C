//13. Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprimir a sa�da da seguinte forma: CENTENA = x DEZENA = x UNIDADE = x 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 
     int num;
		
	printf("Digite um numero inteiro com ate 3 digitos: ");
	scanf("%d", &num);
	
        int centena = num / 100 * 100;
        int dezena = (num % 100) / 10 * 10;
        int unidade = num% 10;
        
        printf("Centena: %d\nDezena: %d\nUnidade: %d\n", centena, dezena, unidade);
	
}
