#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	char 	Sex[11];
	float	Pes[11], Med, Mai = 0, Men = 999999999;
	int 	Qtd = 0,Qtd_Mul = 0;
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		system ("cls");
		printf ("Digite o sexo do %d° indivíduo (F/M): ", i);
		scanf  ("%c", &Sex[i]);
		printf ("Digite o peso do %d° indivíduo: ", i);
		scanf  ("%f", &Pes[i]);
		fflush (stdin);
		
		if (Sex[i] == 'F' || Sex[i] == 'f' || Sex[i] == 'M' || Sex[i] == 'm')
		{
			//its okay.
		}
		else
		{
			printf ("Sexo inválido.");
			exit(0);
		}
	}
	
	system ("cls");
	printf ("As mulheres com peso entre 60 Kg e 80 Kg são:");
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		if (Sex[i] == 'f' || Sex[i] == 'F')
		{
			Qtd_Mul++;
			Med = Pes[i] + Med;
			
			if (Pes[i] >= 60 && Pes[i] <= 80)
			{
				printf ("\nIndivíduo %d : %.1f Kg", i, Pes[i]);
				Qtd++;
			}
			
			if (Pes[i] > Mai)
			{
				Mai = Pes[i];
			}
			if (Pes[i] < Men)
			{
				Men = Pes[i];
			}
		}
	}
	
	Med = Med / Qtd_Mul;
	
	printf ("\n\nA media de peso de todas as %d mulheres é de: %.2f Kg", Qtd_Mul, Med);
	printf ("\n\nO maior peso registrado foi de %.2f Kg", Mai);
	printf ("\nO menor peso registrado foi de %.2f Kg", Men);
  
	return 0;
}
