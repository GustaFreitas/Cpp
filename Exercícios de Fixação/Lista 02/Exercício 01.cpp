#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	float Not_1, Not_2, Not_3, Med = 0;
	
	printf ("Digite a nota da primeira prova: ");
	scanf  ("%f", &Not_1);
	printf ("Digite a nota da segunda prova: ");
	scanf  ("%f", &Not_2);
	printf ("Digite a nota da terceira prova: ");
	scanf  ("%f", &Not_3);
	
	Med = (Not_1 + Not_2 + Not_2) / 3;
	
	if (Med >= 7 && Med <= 10)
	{
		printf ("\nO aluno foi APROVADO com m�dia %.2f.", Med);
	}
	else if (Med > 5 && Med < 7)
	{
		printf ("\nO aluno ficou em RECUPERA��O com m�dia %.2f.", Med);
	}
	else if (Med <= 5 && Med >= 0)
	{
		printf ("\nO aluno foi REPROVADO com m�dia %.2f.", Med);
	}
	else
	{
		printf ("\nM�dia de notas inv�lida.");
	}
	
	//system ("pause");
	
	return 0;
}
