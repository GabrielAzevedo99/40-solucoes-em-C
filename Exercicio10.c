/* 10.  Construa  um  algoritmo  para  calcular  a  distância  entre  dois  pontos  do  plano  cartesiano.  Cada  ponto é um par ordenado (x,y). */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        float x1, x2, y1, y2, distancia; 
	
	printf("Entre com x1 do primeiro ponto: ");
	scanf("%f", &x1);
	printf("Entre com x2 do segundo ponto: ");
	scanf("%f", &x2);
	printf("Entre com y1 do primeiro ponto: ");
	scanf("%f", &y1);
	printf("Entre com y2 do segundo ponto: ");
	scanf("%f", &y2);
	
	
    distancia =(float) (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    
	printf("A distancia e: %.2f", distancia);
	
}
