#include <stdio.H>
#include <stdlib.H>
#include <locale.H>

int main () 
{
	setlocale (LC_ALL, "Portuguese");
	
	int Num_A, Num_B;
	
	printf ("Digite o valor do n�mero A: ");
	scanf  ("%d", &Num_A);
	printf ("Digite o valor do n�mero B: ");
	scanf  ("%d", &Num_B);
	
	if (Num_A > Num_B)
	{
		printf ("\nO n�mero A � maior que o n�mero B.");
	}
	else if (Num_A < Num_B)
	{
		printf ("\nO n�mero A � menor que o n�mero B.");
	}
	else
	{
		printf ("\nOs n�meros A e B s�o iguais.");
	}
	
	//system ("pause");
	
	return 0;
}
