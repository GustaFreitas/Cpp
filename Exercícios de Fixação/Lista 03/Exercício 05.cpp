#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{	
	setlocale (LC_ALL, "Portuguese");
	
	char 	Sex[11];
	float	Pes[11];
	int 	Qtd = 0,Qtd_Mul = 0, Ida[11];
	
	for (int i = 1 ; i <= 10 ; i++)
	{
		system ("cls");
		printf ("Digite o sexo do %d° indivíduo (F/M): ", i);
		fflush (stdin);
		scanf  ("%c", &Sex[i]);
		
		voltar:
			
		if (Sex[i] == 'F' || Sex[i] == 'f' || Sex[i] == 'M' || Sex[i] == 'm')
		{
			//its okay again.
		}
		else
		{
			system ("cls");
			printf ("Sexo inválido. Tente novamente.");
			printf ("\nDigite o sexo do %d° indivíduo (F/M): ", i);
			scanf  ("%c", &Sex[i]);
			fflush (stdin);
			
			goto voltar;
			
			//Questão resolvida de maneira porca até que aprenda a melhor forma de solicitar novamente o sexo do indivíduo.
		}
		
		printf ("Digite o peso do %d° indivíduo: ", i);
		scanf  ("%f", &Pes[i]);
		printf ("Digite a idade do %d° indivíduo: ", i);
		scanf  ("%d", &Ida[i]);	
	}
	
		for (int i = 1 ; i <= 10 ; i++)
	{
		if (Sex[i] == 'm' || Sex[i] == 'M' && Ida[i] >= 20 || Ida[i] <= 30 && Pes[i] > 60)
		{
			Qtd++;
		}
		if (Sex[i] == 'f' || Sex[i] == 'F' && Ida[i] >= 40 && Pes[i] < 70)
		{
			Qtd_Mul++;
		}
	}
	
	system ("cls");
	
	printf ("\nO total de homens com idade entre 20 e 30 anos pesando mais de 60 Kg é de %d", Qtd);
	
	printf ("\n\nO total de mulheres com idade acima de 40 anos pesando menos de 70 Kg é de %d", Qtd_Mul);
	
	return 0;
}
