/*30.  Um  funcion�rio  recebe  um  sal�rio  fixo  mais  4%  de  comiss�o  sobre  as  vendas.
  Fa�a  um  algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do funcion�rio. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

      float salario, valorVendas;
		
	printf("Digite seu salario: ");
	scanf("%f", &salario);
		printf("Digite o valor total em vendas ");
	scanf("%f", &valorVendas);

        float comissao = (4 * valorVendas)/100;
        float salarioFinal = (salario + comissao);
          
          printf("A sua comissao foi: %.2f E o seu salario com comissao sera: %f", comissao, salarioFinal);
          
      }
