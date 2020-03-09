#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	float 	Pes_Max, Pes_Ind[1000], Pes_Tot = 0;
	int 	Qtd = 0;
	
	printf ("Digite o peso máximo suportado pelo elevador: ");
	scanf  ("%f", &Pes_Max);
	
	
	for (int i = 1 ; i <= 1000 ; i++)
	{
		printf ("Digite o peso do %d° indivíduo: ", i);
		scanf  ("%f", &Pes_Ind[i]);
		
		Pes_Tot = Pes_Tot + Pes_Ind[i];
		
		if ( Pes_Tot < Pes_Max)
		{
			Qtd++;
		}
		else
		{
			system ("cls");
			printf ("Proibida a entrada do invivíduo de número %d.", i);
			printf ("\nPeso máximo será excedido.");
			
			Pes_Tot = Pes_Tot - Pes_Ind[i];
			
			goto excesso;
		}
	}
	
	excesso:
	
	printf ("\n\nO total de pessoas dentro do elevador é de %d.", Qtd);
	printf ("\nO peso total das pessoas dentro do elevador é de %.1f Kg", Pes_Tot);
	
	return 0;
}
