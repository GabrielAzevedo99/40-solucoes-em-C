/*23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
  Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários e calcular a altura do prédio. */

#include <stdio.h>
#include <stdlib.h>

void main()
{ 

   int pessoaAltu, pessoaSomb, predioSomb;
   double alturaPredio;
		
	printf("Digite a sua altura em metros: ");
	scanf("%d", &pessoaAltu);
		printf("Digite o comprimento da sua sombra em metros: ");
	scanf("%d", &pessoaSomb);
		printf("Digite o comprimento da sombra do prédio em metros: ");
	scanf("%d", &predioSomb);
	
    alturaPredio = ((predioSomb / pessoaSomb) * pessoaAltu);
          
          printf("A altura total do predio e %.2f metros aproximadamente", alturaPredio);
          
      }
