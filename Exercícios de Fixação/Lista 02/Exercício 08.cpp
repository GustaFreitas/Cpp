#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Ida;
	
	printf ("Digite a idade do nadador: ");
	scanf  ("%d", &Ida);
	
	if (Ida < 1 || Ida > 100)
	{
		printf ("\nIdade inválida!");
	}
	else if (Ida < 8)
	{
		printf ("\nCategoria: INFANTIL.");
	}
	else if (Ida < 11)
	{
		printf ("\nCategoria: JUVENIL.");
	}
	else if (Ida < 16)
	{
		printf ("\nCategoria: ADOLESCENTE.");
	}
	else if (Ida < 31)
	{
		printf ("\nCategoria: ADULTO.");
	}
	else
	{
		printf ("\nCategoria: SENHOR.");
	}
	
	//system ("pause");
	
	return 0;
}
