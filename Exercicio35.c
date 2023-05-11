//35.  Faça  um  algoritmo  que  calcule  e  mostre  a  área  de  um  losango.  Sabe-se  que:  A  =  (diagonal_maior * diagonal_menor)/2;

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float A, diagonal_maior, diagonal_menor, altura;
		
	printf("Digite a diagonal maior: ");
	scanf("%f", &diagonal_maior);
		printf("Digite a diagonal menor: ");
	scanf("%f", &diagonal_menor);
	printf("Digite a altura: ");
	scanf("%f", &altura);

        A  =  (diagonal_maior * diagonal_menor)/2;
          
          printf("A  area  de  um  losango e: %.2f", A);
          
      }
