//33. Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; 

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float A, basemaior, basemenor, altura;
		
	printf("Digite a base maior: ");
	scanf("%f", &basemaior);
		printf("Digite a base menor: ");
	scanf("%f", &basemenor);
	   printf("Digite a altura: ");
	scanf("%f", &altura);

        A = ((basemaior + basemenor)* altura)/2 ;
          
          printf("A  �rea de um trapezio e: %.2f", A);
          
      }
