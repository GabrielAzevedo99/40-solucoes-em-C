/*12. Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%.
 Ap�s o aumento, desconte 8% de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */

#include <stdio.h>
#include <stdlib.h>

void main()
{

        float numSalario, porcentagem, Aumentsalario, porcentagem2, desconto; 
	
	printf("Entre com seu salario: ");
	scanf("%f", &numSalario);
	
        porcentagem = (15 * numSalario)/100 ;
        Aumentsalario = (numSalario + porcentagem);
        porcentagem2 = (8 * Aumentsalario)/100;
        desconto = (Aumentsalario - porcentagem2);
    
	printf("salario inicial %.3f salario com aumento %.3f Salario final %.3f", numSalario, Aumentsalario, desconto);
	
}
