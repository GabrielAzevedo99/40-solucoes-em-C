/*23. Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
  Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um algoritmo para ler os dados necess�rios e calcular a altura do pr�dio. */

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
		printf("Digite o comprimento da sombra do pr�dio em metros: ");
	scanf("%d", &predioSomb);
	
    alturaPredio = ((predioSomb / pessoaSomb) * pessoaAltu);
          
          printf("A altura total do predio e %.2f metros aproximadamente", alturaPredio);
          
      }
