/*17. Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
 Fa�a um algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o). */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

    float tempCelsius;
		
	printf("Digite a temperatura Celsius: ");
	scanf("%f", &tempCelsius);
	
    float Fahrenheit = (tempCelsius * 1.8) + 32;
          
          printf("A temperadura de Celsius convertida para Fahrenheit e: %.2f", Fahrenheit);
          
      }
