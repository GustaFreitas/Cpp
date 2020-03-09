#include <stdlib.H>
#include <stdio.H>
#include <locale.H>

int main ()
{
	int   Dia;
	float Tem, Var = 0, Med = 0;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("\n====Pesquisa meteorológica BH====");
	printf ("\n=================================");
	
	for (int i = 1; i <= 30; i++)
	{
		printf ("\nDigite a temperatura do dia %d: ", i);
		scanf  ("%f", &Tem);
		
		Var = Var + Tem;
		
		if (Tem > 30)
		{
			Dia++;
		}
	}
	
	Med = Var / 30;
	
	printf ("\n\nO número de dias em que a temperatura foi maior que 30° foi de: %d", Dia);
	printf ("\n\nA média de temperatura do mês foi de: %.1f°", Med);
	
	return 0;
}
