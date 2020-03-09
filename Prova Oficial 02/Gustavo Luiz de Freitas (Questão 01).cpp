#include <stdlib.H>
#include <stdio.H>
#include <locale.H>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int 	Ida, Qtd_Fem = 0, Qtd_Mas = 0, Qtd_Men = 0, Mai = 0, Men = 999, Qtd = 0;
	float	Med = 0;
	char 	Sex;
	
	do
	{
		system ("cls");
		
		printf ("Digite a idade do individuo: ");
		scanf  ("%d", &Ida);
		
		if (Ida >= 0)
		{
			
			printf ("Digite o sexo do individuo: ");
			fflush (stdin);
			scanf  ("%c", &Sex);
			
			if (Sex == 'F' || Sex == 'f')
			{
				Qtd_Fem++;
			}
			else if (Sex == 'M' || Sex == 'm')
			{
			Qtd_Mas++;
			}
		
			Med = Med + Ida;
			Qtd++;
		
			if (Ida < 18)
			{
				Qtd_Men++;
			}
		
			if (Ida <= Men)
			{
				Men = Ida;
			}
			
			if (Ida >= Mai)
			{
				Mai = Ida;
			}
		}
		
	}
	while  (Ida >= 0);
	
	Med = Med / Qtd;
	
	system ("cls");
	printf ("Programa executado %d vezes.", Qtd);
	printf ("\nTotal de pessoas do sexo feminino: %d", Qtd_Fem);
	printf ("\nTotal de pessoas do sexo masculino: %d", Qtd_Mas);
	printf ("\nMedia geral das idades: %.1f", Med);
	printf ("\nTotal de pessoas com menos de 18 anos: %d", Qtd_Men);
	printf ("\nMaior idade registrada : %d", Mai);
	printf ("\nMenor idade registrada : %d", Men);
	
}
