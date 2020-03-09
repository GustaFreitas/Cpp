#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	int 	Num_Meg[7], Num_Jog[7], Pts = 0, Rep;
	
	for (int i = 1 ; i <= 6 ; i++)
	{
		printf ("Digite o %d° número sorteado na Mega Sena: ", i);
		scanf  ("%d", &Num_Meg[i]);
	}
	
	system ("cls");
	
	for (int i = 1 ; i <= 6 ; i++)
	{
		printf ("Digite o %d° número marcado no cartão: ", i);
		scanf  ("%d", &Num_Jog[i]);
	}
	
	for (int i = 1 ; i <= 6 ; i++)
	{
		Rep = 0;
		
		for (int j = 1 ; j <= 6 ; j++)
		{
			if (Num_Meg[i] == Num_Meg[j])
			{
				Rep++;
			}
			if (Rep >= 2)
			{
				printf ("Sequência de números inválida. Os números não devem se repetir");
				exit(0);
			}
		}
		
		Rep = 0;
		
		for (int j = 1 ; j <= 6 ; j++)
		{
			if (Num_Jog[i] == Num_Jog[j])
			{
				Rep++;
			}
			if (Rep >= 2)
			{
				printf ("Sequência de números inválida. Os números não devem se repetir");
				exit(0);
			}
		}
	}
	
	for (int i = 1 ; i <= 6 ; i++)
	{
		for (int j = 1 ; j <= 6 ; j++)
		{
			if (Num_Meg[i] == Num_Jog[j])
			{
				Pts++;
			}
		}
	}
	
	printf ("\nO tatal do pontos é: %d", Pts);
	
	return 0;
}
