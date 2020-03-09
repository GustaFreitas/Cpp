#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Num_A, Num_B;
	
	printf ("Digite o valor do número A: ");
	scanf  ("%d", &Num_A);
	printf ("Digite o valor do número B: ");
	scanf  ("%d", &Num_B);
	
	if (Num_A > Num_B)
	{
		printf ("\nO número A é maior que o número B.");
	}
	else if (Num_A < Num_B)
	{
		printf ("\nO número A é menor que o número B.");
	}
	else
	{
		printf ("\nOs números A e B são iguais.");
	}
	
	//system ("pause");
	
	return 0;
}
