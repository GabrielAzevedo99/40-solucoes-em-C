//20. Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo para calcular quantos novelos de l� ela gasta por blusa.

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    int blusa;
    float novelo;
		
	printf("Digite quantas blusas produz: ");
	scanf("%d", &blusa);
	printf("Digite quanto novelo de la usa: ");
	scanf("%f", &novelo);
	
    float totalNovelo = novelo / blusa;
          
          printf("E gasto %.2f novelos de la por blusa.", totalNovelo);
          
      }
