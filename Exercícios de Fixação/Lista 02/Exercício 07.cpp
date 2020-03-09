#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Ida;
	char Sex;
	
	printf ("Digite a idade do cliente: ");
	scanf  ("%d", &Ida);
	printf ("Digite o sexo do cliente (M/F): ");
	fflush (stdin);
	scanf  ("%c", &Sex);
	
	if (Ida < 1 || Ida > 100)
	{
		printf ("\nIdade inválida!");
	}
	else if (Ida < 16 && (Sex == 'm' || Sex == 'M'))
	{
		printf ("\nO valor a ser pago é de R$ 60,00.");
	}
	else if (Ida < 19 && (Sex == 'f' || Sex == 'F'))
	{
		printf ("\nO valor a ser pago é de R$ 60,00.");
	}
	else if (Ida < 19 && (Sex == 'm' || Sex == 'M'))
	{
		printf ("\nO valor a ser pago é de R$ 75,00.");
	}
	else if (Ida < 26 && (Sex == 'f' || Sex == 'F'))
	{
		printf ("\nO valor a ser pago é de R$ 90,00.");
	}
	else if (Ida < 31 && (Sex == 'm' || Sex == 'M'))
	{
		printf ("\nO valor a ser pago é de R$ 90,00.");
	}
	else if (Ida < 41 && (Sex == 'f' || Sex == 'F'))
	{
		printf ("\nO valor a ser pago é de R$ 85,00.");
	}
	else if (Ida < 41 && (Sex == 'm' || Sex == 'M'))
	{
		printf ("\nO valor a ser pago é de R$ 85,00.");
	}
	else if (Ida <= 100 && (Sex == 'f' || Sex == 'F'))
	{
		printf ("\nO valor a ser pago é de R$ 80,00.");
	}
	else if (Ida <= 100 && (Sex == 'm' || Sex == 'M'))
	{
		printf ("\nO valor a ser pago é de R$ 80,00.");
	}
	else
	{
		printf ("\nSexo inválido!");
	}
	
	//system ("pause");
	
	return 0;
}
