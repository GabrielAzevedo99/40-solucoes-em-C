/*12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%.
 Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */

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
